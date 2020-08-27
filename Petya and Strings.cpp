#include "bits/stdc++.h"
 
#define GodSpeed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define Int long long
#define all(x) begin(x),end(x)
#define endl "\n"
#define cy cout << "YES"<<endl 
#define cn cout<<"NO"<<endl
#define elif else if
using namespace std;
 
 
int main () {
	GodSpeed;
	string s; cin >> s;
	string t; cin >> t;
	int count{};
	int size = s.size();
	for(int i {}; i<size; i++){
		s[i] = tolower(s[i]);t[i]=tolower(t[i]);
		if(s[i]>t[i]){cout << 1 << endl;return 0;} 
		elif(s[i]<t[i]){cout << -1 << endl;;return 0;}
	}
	cout << 0 << endl;
    return 0;
}
