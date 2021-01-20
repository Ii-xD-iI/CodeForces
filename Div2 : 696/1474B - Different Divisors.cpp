#include "bits/stdc++.h"
 
using namespace std;

#define all(X)   (X).begin(), (X).end()
#define test     int t;cin>>t;while(t--)
#define len(X)   (int)(X).size()
#define elif     else if
#define int      long long
const int MAXN = 2e5+1,INF = 2e9+1;

void solve();
bool PrimeCheck(int I);

int32_t main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    test {
        solve();
    }
    return 0;
}

bool PrimeCheck(int I) {
    for(int i=2;i*i<=I;++i) {
        if(I%i == 0) return false;
    }
    return true;
}

void solve(){
    int d;cin>>d;
    int a,b;

    for(int i=1+d;i<=2e9;++i) {
        if(PrimeCheck(i)) {
            a = i;break;
        }
    }

    for(int i=a+d;i<=2e9;++i) {
        if(PrimeCheck(i)) {
            b = i;break;
        }
    }

    cout << (long long)a*b << '\n';//a,b are prime so lcm(a,b) == min(a,b);
}
/*
1/20/2020 m/dd/yyyy
*/
