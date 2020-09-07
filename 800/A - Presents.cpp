#include "bits/stdc++.h"
//PRAY :DOLPHINGARLIC: orz orz orz
//PRAY :DORI: orz orz orz
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
	int n;cin>>n;
	vector<int> ans(n,0);
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		ans[x-1] = i;		
	}
	for(int i {};i<n;i++){
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}
/*
11:47 PM
sep/7/2020
*/
