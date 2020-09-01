#include "bits/stdc++.h"
 
#define GS ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(0)
#define Int long long
#define all(x) x.begin(), x.end()
#define el '\n'
#define ints unsigned
#define Ints unsigned long long 
#define elif else if
#define test int t; cin>>t; while(t--)
 
using namespace std;
 
int main () {
    GS;
    // int n;cin>>n;
    string x,y,z;cin>>x>>y>>z;
    string a = x+y;
    sort(all(a));
    sort(all(z));
    if(a==z) cout << "YES" << endl;
    else cout << "NO"<< endl;
 
    return 0;
}
