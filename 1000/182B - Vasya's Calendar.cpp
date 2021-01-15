#include "bits/stdc++.h"
#define all(X)   (X).begin(), (X).end()
#define test     int t;cin>>t;while(t--)
#define len(X)   (int)(X).size()
#define elif     else if
// #define int      long long
#define endl     cout<<'\n'
 
using namespace std;
const int INF = 2e9+1,MAXN = 1e3+7, MOD = 1e9+7;
 
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int n,d,cnt=0;
    cin>>d>>n;
    vector<int> v(n);
    for(int i {};i<n-1;++i) {
        cin>>v[i];
        cnt += d -v[i];
    }
 
    cout << cnt << '\n';
    return 0;
}
