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
    
    int n; cin>>n; 
    vector<pair<int,int>> v(n);
    for(int i {};i<n;i++){
    	cin>>v[i].first>>v[i].second;
    }
    sort(all(v));
    bool ye = false; 
    for(int i=1;i<n;++i){
    	if(v[i-1].second>v[i].second) ye=true;
    }
   	cout << (ye?"Happy Alex":"Poor Alex") << endl;

	return 0;
}
/*
4:20 PM
9/22/2020 m/dd/yyyy
*/
