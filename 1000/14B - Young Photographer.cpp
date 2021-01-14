#include "bits/stdc++.h"
 
using namespace std;
 
#define all(X)   (X).begin(), (X).end()
#define test     int t;cin>>t;while(t--)
#define len(X)   (int)(X).size()
#define elif     else if
// #define int      long long
#define endl     cout<<'\n'
const int INF = 2e9+1,MAXN = 1e3+7, MOD = 1e9+7;
 
void IO(string Bessie);
 
 
 
int32_t main(){
    IO("");//div7
    
    int n,k;cin>>n>>k;
    vector<int> freq(MAXN);
    for(int i{},a,b,aa,bb;i<n;++i) {//already 0 based thonk
        cin>>a>>b;
        aa = min(a,b),bb = max(a,b);
        for(int j=aa;j<=bb;++j) {
            ++freq[j];
        }
    }
    // for(int i {};i<=14;++i) cout << freq[i] << " \n"[i == 14];
    auto it = find(all(freq),n);
    if(it == freq.end()) {cout << -1 << '\n'; return 0;}
 
    if(freq[k] == n) {cout << 0 << '\n'; return 0;}
    int aa=INF,bb=INF;
 
    for(int i=k-1;i>=0;--i) {
        if(freq[i] == n) {aa = k-i;break;}
    }
 
    for(int i = k+1;i<=MAXN;++i) {
        if(freq[i] == n) {bb = i-k;break;}
    }
 
    cout << min(aa,bb); 
    return 0;    
}
 
void IO(string Bessie = "") { 
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);
    if (len(Bessie)) {
        freopen((Bessie+".in").c_str(), "r", stdin);
        freopen((Bessie+".out").c_str(), "w", stdout);
     }
}
/*
1/14/2020 m/dd/yyyy
*/
