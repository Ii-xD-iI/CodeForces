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
	int n; cin>>n; 
	while(true){
		n++;
		int f = n/1000;
		int s = n/100 %10;
		int t = n/10 %10;
		int fo = n%10;
		if(f!= s&&f!= t&&f!= fo&&s!= t && s!= t &&s!= fo&& t != fo) break;
	}
	cout << n << endl;
	return 0;
}
/*
2:20 PM

9/16/2020 m/dd/yyyy
*/
