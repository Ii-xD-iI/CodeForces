#include "bits/stdc++.h"
 
#define all(x)   (x).begin(), (x).end()
#define test     int tt;cin>>tt;while(tt--)
//---------------------------------
#define len(x)   (int)(x).size()
#define elif     else if
//---------------------------------
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
 
	int n;cin>>n;
 
	for(int i {};i<n;++i) cout << "  ";
	cout << 0 << '\n';
 
	for(int i=n-2;i>=0;--i){
		for(int j{};j<=i;++j) {cout << " " << " ";}//spaces
		int tip=1;
		int pos1 = n-i-2;
		for(int j{};j<n-i;++j) cout << j << " ";
		for(int j=((n-i-2)*2);j>=0;--j) {
			if(tip%2!=0){
				cout << pos1;
				pos1--;
			}
			else cout << " ";
			++tip;
		}	
		cout << '\n';
	}
	//==============================
	for(int i {};i<n;++i){
			cout << i << " ";
	}
	cout << n << " ";
	int mid=1;
	int midv = n-1;
	for(int i=(n-1)*2;i>=0;--i){
		if(mid%2!=0){
			cout << midv;
			midv--;
		}
		else cout << " ";
		++mid;
	}
	cout << '\n';
	//==============================
 
	for(int i {};i<n-1;++i){
		for(int j=i;j>=0;--j) {cout << " " << " ";}//spaces
		int tip=1;
		int pos2 = n-i-2;
		for(int j{};j<n-i;++j) cout << j << " ";
		for(int j=((n-i-2)*2);j>=0;--j) {
			if(tip%2!=0){
				cout << pos2;
				pos2--;
			}
			else cout << " ";
			++tip;
		}
			cout << '\n';
	}
 
	for(int i {};i<n;++i) cout << "  ";
	cout << 0 << '\n';
	return 0;
}
/*
10/29/2020 mm/dd/yyyy
WA cuz one extra space after every line
beta round 
*/
