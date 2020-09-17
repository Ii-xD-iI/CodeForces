#include "bits/stdc++.h"
//PRAY :DOLPHINGARLIC: orz orz orz orz orz 
//PRAY :DORI: orz orz orz orz orz orz orz 
//PRAY :SAHIL KUCHLOUS: orz orz orz orz orz
//pray :stefan: orz orz orz orz orz orz orz
//pray :foshy: orz orz orz orz orz orz orz
#define GS ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(0)
#define all(x) x.begin(), x.end()
#define el '\n'
#define Int long long
#define elif else if
#define test Int t; cin>>t; while(t--)
// #define 

using namespace std;

int main(){
    GS;
    test{
    	Int x,y,a,b;cin>>x>>y>>a>>b;
    	if(x>y)swap(x,y);	
    	cout << (Int)min(a*(x+y),(b*x)+a*(y-x)) << endl;    	
    }
    return 0;
}
/*
1:24 PM
9/17/2020
*/
