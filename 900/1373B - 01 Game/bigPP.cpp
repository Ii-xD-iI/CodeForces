
#include "bits/stdc++.h"
//PRAY :DOLPHINGARLIC: orz orz orz orz orz 
//PRAY :DORI: orz orz orz orz orz orz orz 
//PRAY :SAHIL KUCHLOUS: orz orz orz orz orz
//pray :stefan: orz orz orz orz orz orz orz
//pray :foshy: orz orz orz orz orz orz orz
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define Int long long
#define elif else if
#define test Int t; cin>>t; while(t--)

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
	test{
	    Int cnt1{};
	    Int cnt0{};
	    string s;cin>>s; 
	    for(auto &i :s){
	    	if(i=='0')cnt0++;
	    	elif(i=='1')cnt1++;
	    }
            cout << (min(cnt0, cnt1) % 2 != 0 || !(cnt0 == 0|| cnt1 == 0) ? "DA" : "NET") << '\n';
	}
	return 0;
}
/*
1:05 PM
9/23/2020 m/dd/yyyy
*/
