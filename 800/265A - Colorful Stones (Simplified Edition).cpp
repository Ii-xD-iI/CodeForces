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
	string t;cin>>t;
	int pos=1;
	for(int i {};i<t.size();i++){
		if(t[i]==s[pos-1]) pos++;
	}
	cout << pos << endl;
	return 0;
}
/*
12:17 AM
9/10/2020 mm/dd/yyyy
*/
