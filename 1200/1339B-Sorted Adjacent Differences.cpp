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
#define Int long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    int t;cin>>t;
    while(t--){
    	long long n;cin>>n;
    	vector<long long> v(n);
    	for(int i {};i<n;i++)cin>>v[i];
    	sort(all(v));
    	if(n%2==0){//even
    		Int l=n/2+1;
    		Int r=l+1;
    		for(int i {};i<(n/2);++i){
    			cout << v[(l--)-2] << " " << v[(r++)-2] << ' ';
    		}
    	}
    	else{//odd
    		cout << v[n/2]<<" ";
    		Int l=n/2-1,r=n/2+1;
    		for(int i {};i<(n/2);i++){
    			cout << v[(l--)] << " " << v[(r++)] << " ";
    		}
    		cout << '\n';
    	}
    }
    return 0;
}
//TASKKILL /F /IM main.exe
/*
6:15 PM
10/1/2020 mm/d/yyyy

if its even i was couting last element at last 
but 
hab to cout middle first 
oof Test 4 

5 WA on test 4 o boy
*/
