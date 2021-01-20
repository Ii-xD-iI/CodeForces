#include "bits/stdc++.h"
#define len(X) (int)(X).size()
#define elif else if
#define test int tt;cin>>tt;while(tt--)
using namespace std;
const int MAXN = 1e5+1,INF = 2e9+1;
 
void IO(string Bessie);
void solve();
 
int main(){
    IO("");//mootube
 
    test {
        solve();
    }
    return 0; 
}
 
void solve() {
 
    int n;
    cin>>n;
    string s;cin>>s;
    string ans="";
    ans += '1';
    char one = '1',zero = '0';
 
    for(int i=1;i<n;++i) {
        if(s[i] == s[i-1])/*ss are same*/ {
            if(ans[i-1] == one) ans += zero;
            else ans += one;
        }
        else {/*ss are different*/
            if(s[i-1] == one and s[i] == zero){ //1 0 , 0
                if(ans[i-1] == zero) ans += zero;
                else ans += one;
            }
            elif(s[i-1] == zero and s[i] == one) { //0 1,
                ans += one;
            }
        }
    }
    cout << ans << '\n';
    return;
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
1/20/2021
*/
