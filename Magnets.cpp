#include "bits/stdc++.h"
 
#define gOdSpEeD ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(0)
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
    gOdSpEeD;
    int n;cin>>n;
    int cnt{1};
    int a[n];
    for(int i {};i<n;i++)cin>>a[i];
    int crnt= a[0];
    for(int i {1};i<n;i++){if(a[i]!=a[i-1]) cnt++;}
    cout << cnt << endl;
    return 0;
}
//Aug/27/2020 13:31
