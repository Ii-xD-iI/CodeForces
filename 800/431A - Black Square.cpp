#include "bits/stdc++.h"
//PRAY :DOLPHINGARLIC: orz orz orz orz orz 
//PRAY :DORI: orz orz orz orz orz orz orz 
//PRAY :SAHIL KUCHLOUS: orz orz orz orz orz
#define GS ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(0)
#define Int long long
#define all(x) x.begin(), x.end()
#define el '\n'
#define ints unsigned
#define Ints unsigned long long 
#define elif else if
#define test int t; cin>>t; while(t--)

using namespace std;


int main(){
	GS;
	vector<int> v(4,0);
	for(int i {};i<v.size();i++){
		int x;cin>>x;
		v[i] = x;
	}
	int sum{};
	string s;cin>>s; 
	for(int i{};i<s.size();i++){
		sum += v[s[i]-'0'-1]; 
	}
	cout << sum << endl;
	return 0;
}

/*
4:15 PM
9/11/2020 mm/dd/yyyy
*/
