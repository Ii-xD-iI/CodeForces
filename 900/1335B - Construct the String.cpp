#include "bits/stdc++.h"
//PRAY :DOLPHINGARLIC: orz orz orz orz orz 
//PRAY :DORI: orz orz orz orz orz orz orz 
//PRAY :SAHIL KUCHLOUS: orz orz orz orz orz
//pray :stefan: orz orz orz orz orz orz orz
//pray :foshy: orz orz orz orz orz orz orz
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define Int long long
#define elif else if
#define test Int t; cin>>t; while(t--)

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    string l = "abcdefghijklmnopqrstuvwxyz";
    test{
		int n,a,b;cin>>n>>a>>b;
		string s;
		int rep{};
		for(int i {};i<n;i++){
			s += l[rep];
			if(rep==b-1){rep = 0;continue;}
			rep++;
		}
		cout << s << endl;
    }
    return 0;
}
/*
3:05 PM
9/19/2020 m/dd/yyyy
*/
