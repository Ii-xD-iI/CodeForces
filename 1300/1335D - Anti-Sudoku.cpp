#include "bits/stdc++.h"
 
#define all(x)   (x).begin(), (x).end()
#define test     int tt;cin>>tt;while(tt--)
//---------------------------------
#define len(x)   (int)(x).size()
#define elif     else if
//---------------------------------
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);

	test{
		int n = 9;
		while(n--){
			string s;cin>>s;
			for(auto& i:s) {if(i=='9') i--;}
			cout << s << '\n';
		} 
	}
	return 0;
}
/*
10/29/2020 mm/dd/yyy
*/
