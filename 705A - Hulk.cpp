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
    int n;cin>>n;

    string s = "I hate ";
    for(int i=1;i<n;i++){
    	if(i%2 == 0){
    		s += " that I hate ";
    	}
    	else s += " that I love ";
    }
    s += " it";
    cout << s << endl;
    return 0;
}
/*
12:24 PM
9/2/2020
*/
