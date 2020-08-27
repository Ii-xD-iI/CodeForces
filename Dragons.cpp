#include "bits/stdc++.h"
 
#define GodSpeed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define Int long long
#define all(x) begin(x),end(x)
#define endl "\n"
#define ints unsigned
#define cy cout << "YES"<<endl 
#define cn cout<<"NO"<<endl
#define elif else if
using namespace std;
 
 
int main () {
	ints s; cin >> s;
	ints n; cin >> n;
	vector<pair<int,int>> vec(n,make_pair(0,0));
	for(int i {};i<n;i++){cin >> vec[i].first >> vec[i].second;}
	sort(all(vec));
	for(int i {}; i<n;i++){
		if(vec[i].first < s) s += vec[i].second;
		else {cn;return 0;}
	}	
	cy;
    return 0;
}
