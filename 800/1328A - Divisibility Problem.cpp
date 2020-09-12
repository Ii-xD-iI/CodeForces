#include "bits/stdc++.h"
//PRAY :DOLPHINGARLIC: orz orz orz orz orz 
//PRAY :DORI: orz orz orz orz orz orz orz 
//PRAY :SAHIL KUCHLOUS: orz orz orz orz orz
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
		int a;cin>>a;
		int b;cin>>b;
		if(a%b==0) cout << 0 << endl;
		elif(a<b) cout << b-a << endl;
		else cout << b-(a%b) << endl;
	}
	return 0;
}
/*
9:51 PM
9/12/2020
was stuck in queue thats why
*/
