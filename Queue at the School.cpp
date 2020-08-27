#include <bits/stdc++.h>
 
#define IO if(fopen("input.txt","r")) freopen("input.txt","r",stdin), freopen("output.txt","w",stdout)
#define ForCows ios_base::sync_with_stdio(false);cin.tie(NULL)
#define Int long long
#define all(x) begin(x),end(x)
#define endl "\n"
 
using namespace std;
 
int main () {
		IO;
		ForCows;
		int n ; cin >> n;
    int t; cin >> t;
    string s;cin >> s;
    while(t--){
    	for(int j{1}; j<n; j++){
    		if(s[j]=='G'&&s[j-1]=='B') {swap(s[j],s[j-1]);j++;}}}
    cout << s << endl;
    return 0;
}
