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
		int n,k;cin>>n>>k;
		vector<int> a(n);for(int i {};i<n;i++)cin>>a[i];
		vector<int> b(n);for(int i {};i<n;i++)cin>>b[i];
		sort(all(a));
		sort(all(b));
		reverse (all(b));
		vector<int> c(n,0);
		for(int i {};i<k;i++){
			c[i]= max(a[i],b[i]);
		}
		for(int i=k;i<n;i++){
			c[i]=a[i];
		}
		int sum{};
		for(auto &i:c){
			sum += i;
		}
		cout << sum << endl;
	}
    return 0;
}
/*
4:23 PM
9/14/2020 m/dd/yy
reversing b was kinda genious
*/
