#include "bits/stdc++.h"
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define elif else if
 
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
 
	int t;cin>>t;while(t--){
		int n;cin>>n;
		vector<int> v(n);
		for(int i {};i<n;i++) cin>>v[i];
		int cnt0=0 , cnt1=0;
		for(int i {};i<n;i++){
			bool ye;cin>>ye;
			if(ye) cnt1++;
			else cnt0++;
		}
		if(cnt0!=0&&cnt1!=0) {cout << "YES" << endl;continue;}
		vector<int > a(n);
		a=v;
		sort(all(v));
		if(a==v) cout << "YES" << endl;
		else cout << "NO" << endl;
 
	}	
	return 0;
}
//taskkill /IM "main.exe" /F
/*
8:58 PM
10/8/2020 mm/d/yyyy
*/
