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
    vector<string> v(n);
    for(int i {};i<n;i++)cin>>v[i];
    string t1=v[0];
	string t2;
	for(int i=1;i<n;i++){
		if(v[i]!= t1){t2=v[i];break;}
	}
	Int team1{};
	Int team2{};
	for(auto i:v){
		if(i==t1) team1++;
		else team2++;
	}
	cout << (team1>team2?t1:t2) << endl;
	return 0;
}
/*
4:38 pm
9/20/2020 m/dd/yyyy
*/
