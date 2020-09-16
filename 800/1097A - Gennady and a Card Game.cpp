#include "bits/stdc++.h"
//PRAY :DOLPHINGARLIC: orz orz orz orz orz 
//PRAY :DORI: orz orz orz orz orz orz orz 
//PRAY :SAHIL KUCHLOUS: orz orz orz orz orz
//pray :stefan: orz orz orz orz orz orz orz
#define GS ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(0)
#define all(x) x.begin(), x.end()
#define el '\n'
#define Int long long
#define elif else if
#define test Int t; cin>>t; while(t--)
using namespace std;


int main(){
	GS;
	bool ye = false; 
	pair<char,char> n;
	cin>>n.first;
	cin>>n.second;
	int m=5;
	while(m--){
		string f;cin>>f;
		if(f[0]==n.first||f[1]==n.second) ye = true;
	}
	cout << (ye?"YES":"NO") << endl;


	return 0;
}
/*
11:03 PM
9/16/2020 m/dd/yyyy
*/
