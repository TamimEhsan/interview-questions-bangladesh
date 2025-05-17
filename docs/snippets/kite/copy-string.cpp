#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define MOD 1000000007
#define MAX 200005

typedef long long ll;

ll arr[MAX];
int N;

struct info{
    ll sum;
    info(){
        sum=0;
    }
    info(ll x){
        sum=x;
    }
    void show(){
        cout<<"Sum = "<<sum<<"\n";
    }
};
info tree[3*MAX];

info leaf(int i){
    return info(arr[i]);
}
info outOfRange(){
    return info(0);
}
info Set(ll x){
    return info(x);
}
info merge(info x, info y){
    info temp;
    temp.sum=x.sum+y.sum;
    return temp;
}

void build(int node, int l,int r)
{
    if(l==r)
    {
        tree[node]=leaf(l);
        return;
    }
    int mid=(l+r)/2;
    build(node*2,l,mid);
    build(node*2+1,mid+1,r);
    tree[node]=merge(tree[node*2],tree[2*node+1]);
}

info query(int node,int l,int r,int i,int j)
{
    if(i>r || j<l)
        return outOfRange();
    if(l>=i && r<=j)
        return tree[node];
    int mid=(l+r)/2;
    auto x=query(node*2,l,mid,i,j);
    auto y=query(node*2+1,mid+1,r,i,j);
    return merge(x,y);
}

void update(int node,int l,int r,int pos,ll val)
{
    if(pos>r || pos<l)
        return;
    if(l==r)
    {
        tree[node]=Set(val);
        return;
    }
    int mid=(l+r)/2;
    if(pos<=mid)
        update(node*2,l,mid,pos,val);
    else
        update(node*2+1,mid+1,r,pos,val);

    tree[node]=merge(tree[node*2],tree[2*node+1]);
}

void print(int node, int l,int r)
{
    cout<<"["<<l<<","<<r<<"]:--> ";
    tree[node].show();
    if(l==r)
        return;
    int mid=(l+r)/2;
    print(node*2,l,mid);
    print(node*2+1,mid+1,r);
}
void print(){
    print(1,0,N-1);
}
void build(int n){
    N=n;
    build(1,0,N-1);
}
void update(int pos, ll val){
    update(1,0,N-1,pos,val);
}
ll query(int x, int y){
    auto ans = query(1,0,N-1,x,y); 
    return ans.sum;
}

int mp[MAX];

void solve() {
    int n; cin >> n;
    vector<pair<string,int>> lst;
    for(int i = 0; i < n; i++) {
    	string s; cin >> s;
    	lst.push_back({s, i});
    }
    sort(lst.begin(), lst.end());
    int idx = 0;
    for(auto [s, pos] : lst) {
    	mp[pos] = idx++;
    }
    // for(int i = 0; i < n; i++) {
    // 	cout << i << " " << mp[i] << endl;
    // }

    build(n);

    int q; cin >> q;
    while(q--) {
    	string qr;
    	int a, b;
    	cin >> qr >> a >> b;
    	if(qr[0] == 'a') {
    		a = mp[a - 1];
    		ll cur = query(a, a);
    		update(a, cur + b);
    	} else if(qr[0] == 'd') {
    		a = mp[a - 1];
    		ll cur = query(a, a);
    		update(a, max(0LL, cur - b));
    	} else {
    		a = mp[a - 1];
    		b = mp[b - 1];
    		if(a > b) swap(a, b);
    		cout << query(a, b) << "\n";
    	}
    	// print();
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int TC = 1;

    //cin >> TC;

    for(int cs = 1; cs <= TC; cs++) {
        //cout << "Case " << cs << ": ";
        solve();
    }

    return 0;
}
