#include "bits/stdc++.h"
//PRAY :DOLPHINGARLIC: orz orz orz orz orz 
//PRAY :DORI: orz orz orz orz orz orz orz 
//PRAY :SAHIL KUCHLOUS: orz orz orz orz orz
//pray :stefan: orz orz orz orz orz orz orz
#define GS ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(0)
#define all(x) x.begin(), x.end()
#define el '\n'
#define Int long long
#define elif else if
#define test int t; cin>>t; while(t--)
using namespace std;
 
 
int main(){
	GS;
	int n; cin>>n; 
	int cnt{}; 
	Int crime{};
	while(n--){
		Int x;cin>>x; 
		if(x>=1){cnt += x;}
		elif(x==-1){
			if(cnt>0){cnt--;}
			elif(cnt==0){crime++;}
		}
	}
	cout << crime << endl;
	return 0;
}
/*
1:07 PM
9 / 16 /2020 m/dd/yyyy
*/
