#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define MOD 1000000007
#define MAX 200005

typedef long long ll;

set<string> folder[MAX];
map<string, int> get_idx;
map<int, string> get_name;
int par[MAX];

string get_sub(string &s) {
	string sub = "";
	for(int i = (int)s.size() - 1; i >= 0; i--) {
		if(s[i] == '/')
			break;
		sub = s[i] + sub;
	}
	return sub;
}

void dfs(int idx) {
	for(auto sub : folder[idx]) {
		int cur = get_idx[sub];
		dfs(cur);
	}
	folder[idx].clear();
}
void solve() {
    string s;
    int avail = 2;
    
    par[1] = 1;
    get_idx["KGS"] = 1;
    get_name[1] = "KGS";
    int idx = 1;

    while(getline(cin, s)) {
    	if(s.size() == 0)
    		continue;
    	if(s[0] == 'm') {
    		string sub = get_name[idx] + "/" + s.substr(6);

    		if(folder[idx].find(sub) != folder[idx].end()) {
    			cout << "Error: Already Exists\n";
    		} else {
    			folder[idx].insert(sub);
    			get_idx[sub] = avail;
    			get_name[avail] = sub;
    			par[avail] = idx;
    			avail++;
    		}
    	} else if(s[0] == 'l') {
    		for(auto sub : folder[idx]) {
    			cout << get_sub(sub) << "\n";
    		}
    	} else if(s[0] == 'r') {
    		string sub = get_name[idx] + "/" + s.substr(3);
    		if(folder[idx].find(sub) == folder[idx].end()) {
    			cout << "Error: No Such Directory\n";
    		} else {
    			folder[idx].erase(folder[idx].find(sub));
    			dfs(get_idx[sub]);
    		}
    	} else if(s[0] == 'p') {
    		cout << get_name[idx] << "\n";
    	} else if(s[0] == 'c' && s.back() != '.') {
    		string sub = get_name[idx] + "/" + s.substr(3);
    		if(folder[idx].find(sub) == folder[idx].end()) {
    			cout << "Error: No Such Directory\n";
    		} else {
    			idx = get_idx[sub];
    		}
    	} else if(s[0] == 'c' && s.back() == '.') {
    		idx = par[idx];
    	}
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