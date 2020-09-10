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
	int n; cin>>n;  
	string s;cin>>s; 
	vector<bool>v(26,false);
	for(int i {};i<n;i++){
		s[i] = toupper(s[i]);
		v[s[i]-65] = true;
	}
	int cnt{};
 
	for(int i=0;i<26;i++){
		if(v[i]==false)cnt++;
	}
	cout << (cnt>0?"NO":"YES") << endl;
	return 0;
}
/*
7:40 PM
9/10/2020  //mm/dd/yyyy
*/
