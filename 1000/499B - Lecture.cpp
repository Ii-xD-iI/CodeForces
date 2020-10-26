#include "bits/stdc++.h"
 
#define all(x)   (x).begin(), (x).end()
#define elif     else if
#define test     int t;cin>>t;while(t--)
#define len(x)   (int)(x).size()
 
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);

	int n,m;cin>>n>>m;
	vector<pair<string,string>> v(m);
	for(int i {};i<m;++i){
		cin>>v[i].first >> v[i].second;
	}

	for(int j {};j<n;++j){

		string s;cin>>s;
		
		for(int i {};i<m;++i){
		
			if(v[i].first==s){
				if(len(v[i].first)<=len(v[i].second)) cout << v[i].first << " ";
				else cout << v[i].second << " ";
				break;
			}
		}
	}
	return 0;
}
/*
10/26/2020 
*/
