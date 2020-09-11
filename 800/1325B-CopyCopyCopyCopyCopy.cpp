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
		set<int> j;
		int n; cin>>n;
		while(n--){
			int x;cin>>x;
			j.insert(x);
		}
		cout << j.size() << endl;
	}
	return 0;
}

/*
2:14 PM
9/11/2020 mm/dd/yyyy
*/
