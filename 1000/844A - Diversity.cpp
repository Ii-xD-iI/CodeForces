#include "bits/stdc++.h"
 
#define all(x)   (x).begin(), (x).end()
#define elif     else if
#define test     int t;cin>>t;while(t--)
#define len(x)   (int)(x).size()
 
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);

	string s;cin>>s;
	int k;cin>>k;
	if(k>len(s)) {cout << "impossible" << '\n'; return 0;}
	int dups{};
	sort(all(s));
	for(int i {};i<len(s)-1;++i){
		if(s[i]==s[i+1]) dups++;
	}
	if(len(s)-dups>=k) cout << 0 << '\n';//no of default distinct > or == k cout zero
	else cout << k-(len(s)-dups) << '\n';
	return 0;
}
/*
10/26/2020
*/
