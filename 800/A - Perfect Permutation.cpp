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
	int cnt=2;
	if(n%2 != 0) {cout <<-1<<endl;return 0;}
	cout << 2 << " ";
	for(int i=1;i<n;i++){
		if(i%2==0){
			cout << cnt+3 << " ";
			cnt +=3;
		}else{
			cout << cnt-1 << " ";
			cnt--;
		}
	}
 
	return 0;
}
/*
1:35 AM
8th september 2020
*/
