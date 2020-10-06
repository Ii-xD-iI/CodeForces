#include "bits/stdc++.h"

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define elif else if

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    int n;cin>>n;
    vector<int> v(n);
    for(int i {};i<n;++i)cin>>v[i];
    int maxa=1;
	int maxi=1;
	for(int i=1;i<n;i++){
		if(v[i-1]<=v[i]) maxi++;
		else{
			maxi=1;
		}
		maxa = max(maxi,maxa);
	}
	cout<< maxa << '\n';
    return 0;
}
//taskkill /IM "main.exe" /F
/*
2:40 PM
10/6/2020 mm/d/yyyy
*/
