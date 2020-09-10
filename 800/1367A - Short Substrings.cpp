#include "bits/stdc++.h"
//PRAY :DOLPHINGARLIC: orz orz orz
//PRAY :DORI: orz orz orz
#define GS ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(0)
#define Int long long
#define all(x) x.begin(), x.end()
#define el '\n'
#define ints unsigned
#define Ints unsigned long long 
#define elif else if
#define test int t; cin>>t; while(t--)
 
using namespace std;
 
 
int main(){
	GS;
	test{
		string s;cin>>s;
		cout << s[0];
		for(int i=1;i<s.size()-2;i++){
			if(i%2 != 0)cout << s[i];
		} 
		cout << s[s.size()-1] << endl;
	}
	return 0;
}
/*
8:06 PM
9/10/2020 mm/dd/yyyy
*/
