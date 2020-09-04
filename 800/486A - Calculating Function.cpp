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
	Int n;cin>>n;
	if(n%2==0) cout << n/2 << endl;
	else cout <<(Int) ((n-1)/2)-n << endl;
	return 0;
}
/*
2:20 PM
9/4/2020
*/
