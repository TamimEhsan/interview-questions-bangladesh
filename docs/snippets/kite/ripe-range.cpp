#include<bits/stdc++.h>
using namespace std;

const int N = 50004;
long long dp[N];
bool pos[N];
int fruits[N], taste[N];
long long segTree[4*N];

long long build(int node, int l, int r) {
    if( l>r ) return 0;
    if( l == r ){
        return segTree[node] = dp[l];
    }
    int mid = (l+r)/2;
    return segTree[node] = max(build(node*2,l,mid),build(node*2+1,mid+1,r));
}

long long query(int node,int L, int R, int l, int r){
    if( l>r or l>R or r<L ) return 0;
    if( l>=L and r<=R ) return segTree[node];
    int mid = (l+r)/2;
    return max( query(node*2,L,R,l,mid),query(node*2+1,L,R,mid+1,r) );
}

void solve() {
    int n,q;
    cin>>n>>q;
    for(int i=0;i<N;i++) dp[i] = 0, pos[i] = false;
    for(int i=0;i<n;i++) cin>>fruits[i]>>taste[i];
    pos[0] = true; dp[0] = 1;
    for(int i=0;i<n;i++){
        for(int j=N - fruits[i]-1;j>=0;j--){
            if( pos[j] ) {
                dp[j+fruits[i]] = max( dp[j+fruits[i]], dp[j] + taste[i] );
                pos[j+fruits[i]] = true;
            }
        }
    }
    build(1,0,N-1);
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<query(1,l,r, 0,N-1)-1<<endl;
    }
}

int main() {
    int tc;
    cin>>tc;
    while(tc--) solve();
}
