#include "bits/stdc++.h"

using namespace std;

#define len(X) (int)(X).size()
#define elif else if
#define all(X) X.begin( ), X.end()
#define test int t;cin>>t;while(t--)
#define ceil(XXX,YYY) (XXX + YYY-1)/YYY 

const int32_t MAXN = 2e5+7 ,INF = 2e9+7,MOD = 1e9+7;//check the limits u dum dum
const long long INFLL = 1e18+7;

void IO(string Bessie);
void solve();

int32_t main() {
    IO("");

    test{
        solve();
    }
    return 0;
}

void solve() {
    string s;cin>>s;
    const int n = len(s);
    int x;cin>>x;

    vector<int> w(n,1);
    for(int i {};i<n;++i) {
        //build
        if(s[i] == '0') {
            if(i-x>=0){//left
                w[i-x] = 0;
            }
            if(i+x<=n-1){//right
                w[i+x] = 0;
            }
        }        
    }

    bool l,r;
    bool zerol = false,zeror = false;
    for(int i {};i<n;++i) {
        // both false -> -1
        if(s[i] == '0'){
            //either out of bound or zero 
            if(i-x<0){
                zerol = true;//yay +1
            }else{
                if(w[i-x] == 0){zerol = true;}//+1
            }
            if(i+x > n-1){//out of bound
                zeror = true;//yayy +2
            }
            else{
                if(w[i+x] == 0){zeror = true;}//+2
            }
            
            if(not(zerol) or not(zeror)){
                cout << -1 << '\n';
                return;
            }

            zerol = false,zeror = false;
        }else{
            if(i-x>=0){//in bound
                if(w[i-x] == 1) l=true;
            }
            if(i+x<=n-1){
                if(w[i+x] == 1) r = true;
    
            }

            if( (not l) and (not r) ){//both 0
                cout << -1 << '\n';
                return;
            }
            l = false,r=false;//set
        }

    }

    for(int i {};i<n;++i) {
        cout << w[i];
    }
    cout << '\n';
}

void IO(string Bessie = "") 
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);
    if (len(Bessie)) {
        freopen((Bessie+".in").c_str(), "r", stdin);
        freopen((Bessie+".out").c_str(), "w", stdout);
    } 
}
/*
2/18/2021
*/
