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
    int n; cin>>n; 
    int x{};
    while(1){
    	if(n>=100){x+=n/100;n %= 100;}
    	elif(n>=20){x+= n/20;n %=20;}
    	elif(n>=10){x+= n/10;n %=10;}
    	elif(n>=5){x+= n/5;n %=5;}
    	else {x+=n;break;} 
    }
    cout << x << endl;
    return 0;
}
/*
5:08 PM
9/13/2020/mmm/dd/yyyy
*/
