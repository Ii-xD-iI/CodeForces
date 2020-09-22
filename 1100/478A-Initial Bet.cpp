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
    
    Int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    Int sum = a+b+c+d+e;
    if(sum%5!=0||sum==0)cout << -1<<endl;
    else cout << (sum/5) << endl;
	return 0;
}
/*
8:23 PM
9/22/2020 m/dd/yyyy
*/
