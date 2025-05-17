#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// #region snippet
const int N = 100005;
vector<int> adj[N];
long long child[N];
long long cost[N];
long long total_child = 0;
void dfs1(int u, int p){
    
    for(auto v:adj[u]){
        if( v == p ) continue;
        dfs1(v,u);
        child[u] += child[v];
        cost[u] += 2*child[v]+cost[v];
    }
}

pair<long long,int> mn;
void dfs2(int u, int p, long long c) {
    //cout<<u<<" "<<c<<endl;
    mn = min(mn,{c,u});
    for(auto v:adj[u]){
        if( v == p ) continue;
        long long new_cost = c - 4*child[v] + 2*total_child;
        dfs2(v,u,new_cost);
    }
}

void solve(){
    int n,q;
    cin>>n;
    for(int i=1;i<=n;i++) {
        adj[i].clear();
        cost[i] = child[i] = 0;
    }
    total_child = 0;
    for(int i=0;i<n-1;i++) {
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    total_child = 0;
    cin>>q;
    while(q--) {
        int c,t;
        cin>>c>>t;
        child[c] += t;
        total_child += t;
    }
    dfs1(1, 0);
    mn = {cost[1],1};
    dfs2(1,0,cost[1]);
    cout<<mn.second<<" "<<mn.first<<endl;
}

// #endregion snippet
int main() {
    int tc;
    cin>>tc;
    while(tc--) solve();
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
