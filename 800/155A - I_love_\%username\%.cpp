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
	for(int i {};i<n;i++){cin>>v[i];}
	int b=v[0];
	int w=v[0];
	int cnt{};
	for(int i=1;i<n;i++){
		if(v[i]>b){b=v[i];cnt++;}
		elif(v[i]<w){w=v[i];cnt++;}
	}
	cout << cnt << endl;
	return 0;
}
/*
10:08 PM
9/15/2020 m/dd/yyyy
*/
