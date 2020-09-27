#include "bits/stdc++.h"
//PRAY :ORZ FENCING: orz orz orz orz orz 
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
    
    Int n,m;cin>>n>>m;
    Int currentPos=1;
    Int cnt{};
    while(m--){
    	Int x;cin>>x;
    	if(x-currentPos<0) cnt+=n-(currentPos-x);
    	else cnt+= abs(currentPos-x);
    	currentPos=x;
    	// cout << cnt << " : " << currentPos << " -> " << x << endl;
    }
    cout << cnt << endl;
    return 0;
}
/*
used 1st test case 
wrote the acc answer 
think about formula 
regret
fix overflow
*/



//TASKKILL /F /IM main.exe
/*
7:32 PM
9/27/2020 m/dd/yyyy
*/
