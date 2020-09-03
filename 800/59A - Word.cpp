#include "bits/stdc++.h"
//PRAY :DOLPHINGARLIC: orz orz orz
#define GS ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(0)
#define Int long long
#define all(x) x.begin(), x.end()
#define el '\n'
#define ints unsigned
#define Ints unsigned long long 
#define elif else if
#define test int t; cin>>t; while(t--)
 
using namespace std;
 
int main () {
    GS;
    string s;cin>>s;
    int sz = s.size();
    int uc{};
    for(int i {};i<sz;i++){
    	if(s[i]>= 'A' && s[i]<= 'Z') uc++;
    }
    if(uc > sz/2){
    	for(int i {};i<sz;i++){
    		s[i] = toupper(s[i]);
    	}
    }
    else{
    	for(int i {};i<sz;i++){
    		s[i]= tolower(s[i]);
    	}
    }
    cout << s << endl;
    return 0;
}
/*
12:21 PM
9/3/2020
*/
