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
    
    int n;cin>>n;
    vector<int>freq(5003);//1 based indexing :weary: 
    for(int i=0,v;i<n;++i) {cin>>v;freq[v]++;}
    int cnt{}; 
    for(int i=1;i<n+1;++i) {
        if(freq[i] == 0) {
            ++cnt;
        }
    }
    cout << cnt << '\n';
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
1/14/2020 d/mm/yyyy
*/
