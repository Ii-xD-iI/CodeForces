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
    int n;cin>>n;
    int m;cin>>m;
    vector<char> v(n*m);
    for(int i {};i<n*m;i++){
    	cin>>v[i];
    }
    int bnw{};
    for(auto i:v){
    	if(i=='W'||i=='G'||i=='B'){bnw++;}
    }
    int sz = v.size();
    cout << (bnw==sz?"#Black&White":"#Color") << endl;
    return 0;
}
/*
5:13 PM
9/17/2020 m/dd/yyyy
*/
