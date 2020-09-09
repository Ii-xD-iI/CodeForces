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
	int a=0,b=0,c=0;
	for(int i=3;i<n+3;i++){
		int x;cin>>x;
		if(i%3==0) a += x;
		elif(i%3 ==1) b += x;
		elif(i%3 == 2)c += x;
	}
	if(a>b&&a>c){
		cout << "chest" << endl;
		return 0;
	}
	if(b>c&&b>a){
		cout << "biceps" << endl; 
		return 0;
	}
	if(c>a&&c>b){
			cout << "back" << endl;
			return 0;
	}
	return 0;
}
/*
4:28 PM
9th september 2020
*/
