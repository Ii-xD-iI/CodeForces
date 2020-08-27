#include <bits/stdc++.h>
#define int long long 
#define all(x) begin(x), end(x)
#define endl "\n"
#define Int signed
using namespace std;
 
Int main(){
    Int t; cin >> t;
    while(t--){
        int x,y,a,b; cin >> x >> y >> a >> b;
        y =y-x; x=0;
        int c = a + b;
        if(y%c==0) cout << y/c << endl;
        else cout << "-1" << endl;
    }
    return 0;
    
}
