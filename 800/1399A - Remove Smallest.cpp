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
    test{
    	int n; cin>>n; 
    	vector<int>v(n);
    	for(int i {};i<n;i++){
    		cin>>v[i];
    	}
    	sort(all(v));
    	bool ye=false;
    	for(int i=1;i<n;i++){
    		if(abs(v[i-1]-v[i])>1){ye=true;break;}
    	}
    	cout << (ye?"NO":"YES") << endl;
    }
    return 0;
}
/*
7:05 PM
9/13/2020 mm/dd/yyyy
*/
