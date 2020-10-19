#include "bits/stdc++.h"
 
#define all(x)   (x).begin(), (x).end()
#define rall(x)  (x).rbegin(),(x).rend()
#define elif     else if
#define test     int t;cin>>t;while(t--)
#define len(x)   (int)(x).size()
#define mini     INT_MIN
#define maxi     INT_MAX
#define printnl  cout << '\n'

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n,m;cin>>n>>m;
    vector<int> v(m);
    for(int i {};i<m;++i) cin>>v[i];
    sort(all(v));
    int dif = maxi;
    for(int i{};i<m-(n-1);i++){
        dif = min(dif , abs(v[i] - v[n+i-1]));
    }    
    cout << dif;
	return 0;
}
/*
10/19/2020
i use vscode btw
*/
