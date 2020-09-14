#include "bits/stdc++.h"
//PRAY :DOLPHINGARLIC: orz orz orz orz orz 
//PRAY :DORI: orz orz orz orz orz orz orz 
//PRAY :SAHIL KUCHLOUS: orz orz orz orz orz
#define GS ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(0)
#define all(x) x.begin(), x.end()
#define el '\n'
#define Int long long
#define elif else if
#define test int t; cin>>t; while(t--)
using namespace std;
 
int main(){
    GS;
    string s; 
    getline(cin,s);
    char x;
    set<char> se;
    for(int i {};i<s.size();i++){
        x= s[i];
        if(x != ' ' && x != ',' && x != '{' && x != '}'){
            se.insert(x);
        }
    }
    cout << se.size() << endl;    
    return 0;
}
/*
4:02 PM
9/14/2020 m/dd/yyyy
*/
