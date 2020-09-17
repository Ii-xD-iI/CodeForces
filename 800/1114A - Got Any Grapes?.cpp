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
    Int a,d,m;cin>>a>>d>>m;
    Int g,p,b;cin>>g>>p>>b;
    if(a>g){cout << "NO" << endl;return 0;}
    g -= a;
    // cout << g << endl;
 
    if(d>(g+p)){cout << "NO" << endl; return 0;}
    Int sum = g+p;
    if(m>(sum-d)+b){cout << "NO" << endl; return 0;}
    cout << "YES" << endl;
    return 0;
}
/*
11:46 PM
9/17/2020 m/dd/yyyy
*/
