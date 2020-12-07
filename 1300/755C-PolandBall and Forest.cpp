#include "bits/stdc++.h"
 
using namespace std;

#define all(X)   (X).begin(), (X).end()
#define test     int t;cin>>t;while(t--)
#define len(X)   (int)(X).size()
#define elif     else if
#define bignum   1e9+1
#define Int      long long
#define MAXN     1e4+1
//----------------Prototypes------------------
void IO(string Bessie);
void dfs(int A);
//-----------------Globals--------------------
int n;
vector<int> v(MAXN);
map<int,vector<int>> adj;
vector<int> vis(MAXN);
//-------------------x-x----------------------

int32_t main(){
	IO("");//fenceplan

	cin>>n;
	for(int i {};i<n;++i) {
		int a;cin>>a;
		a--;
		adj[i].push_back(a);
		adj[a].push_back(i);
	}
	int ans{};
	for(int i {};i<n;++i) {
		if(not vis[i]) {
			dfs(i);
			++ans;
		}
	}
	cout << ans << '\n';
	return 0;
}

void dfs(int A) {
	vis[A] = true;
	for(auto Node: adj[A]) {
		if(not vis[Node]) dfs(Node);
	}
}

void IO(string Bessie = "") { 
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);
    if (len(Bessie)) {
        freopen((Bessie+".in").c_str(), "r", stdin);
        freopen((Bessie+".out").c_str(), "w", stdout);
     }
}

/*
12/7/2020
basically count the number of connected cmp
*/
//most imp line was : pi denotes the most distant from Ball i
