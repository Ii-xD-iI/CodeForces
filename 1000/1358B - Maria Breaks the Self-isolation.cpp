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
 
void solve(int &x, vector<int> &a);
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    test{
        int n; cin>>n; 
        vector<int> v(n);
        for(int i {};i<n;i++)cin>>v[i];
        solve(n,v);
    }
    return 0;
}
 
void solve(int &x, vector<int> &a){
    sort(all(a));
    int sum=1;
    int i{};
    for(;i<x;i++){
        if(a[i]<=i+1) sum = i+2;
    }
    cout << sum << endl;
}
 
 
//TASKKILL /F /IM main.exe
/*
6:36 PM
9/25/2020 m/dd/yyyy
*/
