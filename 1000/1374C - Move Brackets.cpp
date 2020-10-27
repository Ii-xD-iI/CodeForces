#include "bits/stdc++.h"
 
#define all(x)   (x).begin(), (x).end()
#define elif     else if
#define test     int t;cin>>t;while(t--)
#define len(x)   (int)(x).size()
 
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
 
	test{
		int n;cin>>n;
		string s;cin>>s;
		int initcnt{};
		int cnt{};
		for(auto& i: s){
			if(i==')') {
				initcnt--;
				if(initcnt<0){
					initcnt=0;
					cnt++;
				}
			}
			else initcnt++;
		}
		cout << cnt << '\n';
	}
	return 0;
}
/*
10/27/2020 mm/dd/yyyy
*/
