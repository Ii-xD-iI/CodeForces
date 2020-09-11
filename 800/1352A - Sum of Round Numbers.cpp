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
	test{
		string s;cin>>s;//5009
		int cnt{};
		vector<char> vec(s.size(),'0');
		for(int i {};i<s.size();i++){
			if(s[i]!= '0'){
				vec[i] = s[i];
			}
		}
		for(int i {};i<vec.size();i++){
			if(vec[i]!= '0') cnt++;
		}
		cout << cnt<< endl;
		for(int i {};i<vec.size();i++){
			if(vec[i]!= '0'){
				cout << vec[i];
				for(int j=i;j<vec.size()-1;j++) cout << '0';
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
/*
12:00 PM
9/11/2020 mm/dd/yyyy
*/
