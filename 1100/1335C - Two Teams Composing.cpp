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
	ios_base::sync_with_stdio(false);cin.tie(0);
    test {
        int n;cin>>n;
        vector<int> v(n);
        vector<int> cnt(n+1,0);
        int dist{};
        for(int i {};i<n;i++){
            cin>>v[i];
            cnt[v[i]]++;    
        }
        for(int i {};i<n+1;i++) {
            if(cnt[i]>0) dist++;
        }
 
        int cntmx = *max_element(all(cnt));
        cout << max(min(dist-1, cntmx),min(dist,cntmx-1)) << '\n';
    }
	return 0;
}
/*
10/22/2020
*/
