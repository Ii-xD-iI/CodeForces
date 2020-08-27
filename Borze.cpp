#include <bits/stdc++.h>
#define Int long long
#define all(x) begin(x),end(x)
#define endl "\n"
 
using namespace std;
 
int main () {
		string s; cin >> s;
		for(size_t i {}; i<s.size(); i++){
			if(s[i] == '.') { cout << 0;}
			else if(s[i]=='-'&&s[i+1]=='.') {i++; cout << 1;}
			else if (s[i]=='-'&&s[i+1]=='-') {i ++;cout << 2;}
		}
		cout << endl;
		
    return 0;
}
