#include "bits/stdc++.h"

#define GS ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(0)
#define Int long long
#define all(x) x.begin(), x.end()
#define el '\n'
#define ints unsigned
#define elif else if
#define test int t; cin>>t; while(t--)

using namespace std;

int main () {
    GS;
    test{
    	int n;cin>>n;
    	string m;
    	for(int i {};i<n;i++){string a;cin>>a; m += a;}
    	sort(all(m));
    	int cnt{1};
    	int realcnt{};
    	for(int i{};i<m.size()-1;i++){
    		if(m[i]==m[i+1])cnt++;
    		else{
    			if(cnt%n!=0) realcnt++;cnt=1; 
    		}
    		// cnt=0;
    	}
    	cout << (realcnt==0?"NO":"YES") << endl;
    }
    return 0;
}
/*
11:24 PM
8/30/2020
*/
