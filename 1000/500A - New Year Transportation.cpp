#include "bits/stdc++.h"
 
#define all(x)   (x).begin(), (x).end()
#define elif     else if
#define test     int t;cin>>t;while(t--)
#define len(x)   (int)(x).size()
 
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);

	int n;cin>>n;
	int k;cin>>k;
	bool ye = false; 
	vector<int> v(n);
	for(int i=1;i<=n;++i) cin>>v[i];
	for(int i=1;i<=n;){
		if(i>k){break;}
		if(i==k){ye=1;break;}
		i+=v[i];
	}
	cout << (ye? "YES": "NO") << '\n';
	// cout << (ye? "YES":"NO") << '\n';
	return 0;
}
/*
dfs and similar ? wut
10/25/2020
*/
