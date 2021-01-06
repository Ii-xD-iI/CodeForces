#include "bits/stdc++.h"
 
using namespace std;
 
#define all(X)   (X).begin(), (X).end()
#define test     int t;cin>>t;while(t--)
#define len(X)   (int)(X).size()
#define elif     else if
#define INF   2e9+1
// #define int      long long
#define MAXN     1e5+7
 
 
int32_t main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int n;cin>>n;
    vector<int> v(n);
    for(int i {};i<n;++i) {
        cin>>v[i];
    }
    sort(all(v));
    auto it = find(all(v),1);
    if(it == v.end()) {
        cout << 1 << '\n';
    }
    else cout << -1 << '\n';
    return 0;    
}
