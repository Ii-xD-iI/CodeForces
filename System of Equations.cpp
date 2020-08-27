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
    int n,m;cin>>n>>m;
    int count{};
    for(int i {};i<min(n,m);i++){
    	for(int j {};j<min(n,m);j++){
    		if((i*i)+j==n&&(j*j)+i==m) count++;
    	}
    }
    cout << count << endl;
    return 0;
}
