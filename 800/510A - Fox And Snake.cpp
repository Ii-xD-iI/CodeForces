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
	int n,m;cin>>n>>m;
	for(int i {1};i<=n;i++){
		if(i%2 != 0){
			for(int j {};j<m;j++){
				cout << '#';
			}
			cout << endl;
		}
		else {
			if(i%4==0){//|**********
				cout << '#';
				for(int j=1;j<m;j++){
					cout << '.';
				}
				cout << endl;
			}
			else{
				for(int j{};j<m-1;j++){
					cout << '.';
				}
				cout << '#' << endl;
			}
		}
	}
	return 0;
}
/*
3:59 pm
9/16/2020 m/dd/yyyy
*/
