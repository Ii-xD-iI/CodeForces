#include "bits/stdc++.h"
//PRAY :DOLPHINGARLIC: orz orz orz
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
	int k;cin>>k;
	int sum{};
	while(n--){
		int x;cin>>x;
		if(x>k)sum +=2;
		else sum++;
	}
	cout << sum << endl;
	return 0;
}
/*
2:39 PM
9/5/2020
*/
