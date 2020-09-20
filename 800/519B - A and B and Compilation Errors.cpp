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
    
    Int n; cin>>n; 
    
    Int sum1=0,sum2=0,sum3=0;

    for(int i {};i<n;i++){Int x;cin>>x; sum1+=x;}

    for(int i {};i<n-1;i++){Int y;cin>>y; sum2+=y;}
    cout << sum1 - sum2 << endl;

	for(int i {};i<n-2;i++){Int z;cin>>z; sum3+=z;}

	cout << sum2 - sum3 << endl;
    return 0;
}
/*
12:23 PM
9/20/2020 m/dd/yyyy
*/
