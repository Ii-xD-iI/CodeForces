#include <bits/stdc++.h>
#define ll long long 
#define all(x) begin(x), end(x)
#define endl "\n"
using namespace std;
 
int main(){
    char ad; cin >> ad;
    char b;
//    array <char,5> vow{'a','e','i','o','u'};
    while(ad != '?'){
        if(ad != ' ') b = ad;
        cin >> ad;
    }
    ad = toupper(b);
    if(ad=='A' || ad=='E' || ad=='I' || ad=='O' || ad=='U' || ad=='Y') {
        cout << "YES" << endl;
        return 0;
    } else cout << "NO" << endl;
    
    return 0;
}
 
