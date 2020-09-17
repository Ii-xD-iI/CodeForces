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
    	Int a,b,n;cin>>a>>b>>n;
    	Int cnt{};
    	while(max(a,b)<=n){
    		if(b>=a){
    			a += b;
    			cnt++;
    		}
    		else{
    			b +=a;
    			cnt++;
    		}
    	}
    	cout << cnt << endl;
    }
    return 0;
}
/*
4:53 PM
9/17/2020
*/
