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
	
	string s;cin>>s;
	int n = (int)s.size();
	int cnt{};
	int rcnt{}; 
	for(auto i :s){
		if(i>='A'&&i<='Z')cnt++;
		else rcnt++;
	}
	// cout << rcnt << " " << cnt << " " << n <<endl;
	if((cnt==n) || ((rcnt==1)&&(s[0]>='a'&&s[0]<='z'))){
		for(int i {};i<n;i++){
			if(s[i]<='z' && s[i] >='a'){//lc
				cout << (char)toupper(s[i]);
			}
			else cout << (char)tolower(s[i]);
		}
		cout << endl;
	} 
	else cout << s  << endl;

	return 0;
}
//TASKKILL /F /IM main.exe

/*
12:46 PM
9/25/2020 m/dd/yyyy
*/
