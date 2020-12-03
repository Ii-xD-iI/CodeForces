#include "bits/stdc++.h"
 
#define all(x)   (x).begin(), (x).end()
#define test     int t;cin>>t;while(t--)
#define IO(NAME) ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); if(fopen(NAME ".in", "r")) freopen(NAME ".in", "r", stdin),freopen(NAME ".in", "w", stdout); 
//---------------------------------
#define len(x)   (int)(x).size()
#define elif     else if
//---------------------------------
using namespace std;

long long N;
vector<vector<int>> adj(1e5+1);
vector<int>  vis(1e5+1);
vector<pair<int,bool>> v(1e5+1);

void dfs(int& A, bool b) {
	v[A].second = b;
	vis[A] = true;
	for(auto i:adj[A]) {
		if(vis[i] ==0 ) {
			dfs(i , !b);
		}
	}	
}

int main(){
	IO("");//closing

	cin>>N;
	for(int i=0;i<N-1;++i) {
		int a,b;cin>>a>>b;
		a--;b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	for(int i {};i<N;++i) {
		v[i].first = i;
	}

	dfs(adj[0][0],1);
	long long zero {};
	long long one{};
	for(int i {};i<N;++i) {
		if(v[i].second == 0) zero++;
		else one++;
	}

	cout << (long long) (abs(zero*one) - (N-1)) << '\n';
	return 0;
}

/*
int overflow 
12/3/2020 mm/d/yyyy
*/
