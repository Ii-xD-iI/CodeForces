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
		string s;cin>>s;
		string k;cin>>k;
		int sz = s.size();
		string a(sz,'1');
		for(int i {};i<sz;i++){
			if(s[i]== k[i]) a[i]= '0';
		}
		cout << a << endl;
	return 0;
}
/*
11:18 pm
9/5/2020
*/
