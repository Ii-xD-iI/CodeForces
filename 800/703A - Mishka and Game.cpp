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
	int a{};
	int b{};
	test{
		int x,y;cin>>x>>y;
		if(x>y)a++;
		elif(x<y)b++;
	}
	if(a>b) cout << "Mishka" << endl;
	elif(b>a) cout << "Chris" << endl;
	else cout << "Friendship is magic!^^" << endl;
	return 0;
}
/*
6:59 PM
9/14/2020 m/dd/yyyy
*/
