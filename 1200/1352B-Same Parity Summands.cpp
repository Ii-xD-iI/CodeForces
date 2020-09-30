#include "bits/stdc++.h"
//PRAY :ORZ FENCING: orz orz orz orz orz 
//PRAY :DOLPHINGARLIC: orz orz orz orz orz 
//PRAY :DORI: orz orz orz orz orz orz orz 
//PRAY :SAHIL KUCHLOUS: orz orz orz orz orz
//pray :stefan: orz orz orz orz orz orz orz
//pray :foshy: orz orz orz orz orz orz orz
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define elif else if

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    int t;cin>>t;
    while(t--){
    	int n; cin>>n;
    	int k;cin>>k;
    	if( n-(2*(k-1))>0 && (n-(2*(k-1)))%2==0 ){
    		cout << "YES\n";
    		for(int i {};i<(k-1);++i)cout << 2 << " ";
    		cout << n-(2*(k-1)) << '\n';
    	}
    	elif( n-(k-1)>0 && (n-(k-1))%2!=0){
    		cout << "YES\n";
    		for(int i {};i<(k-1);++i) cout << 1 << " ";
    		cout << n-(k-1) << '\n';
    	}
    	else cout << "NO\n" ;
    }
    return 0;
}
//TASKKILL /F /IM main.exe
/*
4:57 PM
9/30/2020
*/
