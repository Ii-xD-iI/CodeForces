#include "bits/stdc++.h"
 
#define all(x)   (x).begin(), (x).end()
#define test     int tt;cin>>tt;while(tt--)
#define len(x)   (int)(x).size()
#define elif     else if
 
using namespace std;
 
/*---------------------------------
//worst swaps are n*(n-1)/1
//save my 1 swap
//cout << yes if one pair is correct
//non-decreasing
//increasing 
//if one is == or < noice
---------------------------------*/
 
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
 
	test{
		int n;cin>>n;
		vector<int> v(n);
		for(int i {};i<n;++i) cin>>v[i];
		bool ye = false; 
		for(int i {};i<n-1;++i) {
			if(v[i] <= v[i+1]){ye=true;break;}
		}
		cout << (ye? "YES" : "NO") << '\n';
	}
	return 0;
}
/*
10/28/2020 mm/dd/yy
*/
