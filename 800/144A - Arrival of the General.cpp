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
	vector<int> v(n);
	for(int i {};i<n;i++){
		cin>>v[i];
	} 
	int max{};
	int maxi{};
	int min=101;
	int mini{};
	for(int i {};i<n;i++){
		if(v[i]>max){max = v[i];maxi = i;}
		if(v[i]<=min){min = v[i];mini=i;}
	}
 
	if(maxi>mini) cout << maxi + v.size()-2-mini << endl;
	else cout << maxi + v.size()-(mini+1) << endl;
 
	return 0;
}
/*
6:57 PM
9/15/2020 m/dd/yyyy
*/
