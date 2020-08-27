
#include "bits/stdc++.h"
 
#define IO ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(0)
#define Int long long
#define all(x) x.begin(), x.end()
#define el '\n'
#define ints unsigned
#define cy cout << "YES" << end 
#define cn cout <<"NO" << end
#define elif else if
#define test int t; cin>>t; while(t--)
 
using namespace std;
 
 
int main () {
    IO;
    int k,n,w; cin >> k >> n >> w;
    int cost{};
    cost = k*(w*(w+1))/2;
    if(n>cost) cout << 0 << endl;
    else cout <<cost-n << endl;
    return 0;
}
