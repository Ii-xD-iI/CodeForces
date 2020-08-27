#include <bits/stdc++.h>
//#define ll long long 
#define all(x) begin(x),end(x)
#define endl "\n"
using namespace std;
 
int main(){
    string s; cin >> s;
    string a; cin >> a;
    string temp = s;
    reverse(all(temp));
    cout << (temp == a ? "YES" : "NO") << endl;
    //cout << s << endl;
    return 0;
}
