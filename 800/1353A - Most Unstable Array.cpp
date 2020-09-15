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
#define test int t; cin>>t; while(t--)
using namespace std;
 
 
int main(){
	GS;
	test{
		int n,m;cin>>n>>m;
		if(n>2){
			cout << 2*m << el;
		}
		elif(n==2){cout << m << el;}
		else{cout << 0 << el;}
	}
	return 0;
}
/*
12:19 AM
9/16/2020
*/
