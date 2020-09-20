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
    
    int n;cin>>n;
    int k;cin>>k;
    vector<int>v;
    for(int i {};i<n;++i){
    	int x;cin>>x;
    	if(x<=0) v.push_back(x);
    }
    sort(all(v));
    int sum{};
    int mini = min((int)v.size(),k);
    for(int i {};i<mini;i++){
    	sum += abs(v[i]);
    }
    cout << sum << endl;
	return 0;
}
/*
5:20 PM
8/20/2020
*/
