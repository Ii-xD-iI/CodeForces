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
	int n; cin>>n; 
	vector<int> v;
	int max{};
	int sum{};
	for(int i {};i<n;i++){
		int x;cin>>x;
		if(x>max) max=x; 
		sum += x;
	}
	max = max*n;
	cout << max-sum << endl;
	return 0;
}
/*
7:18 PM
9/11/2020 m/dd/yyyy
tomorrow is cpinitiative's first lecture for basics 2
*/
