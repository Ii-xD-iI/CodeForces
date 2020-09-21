#include "bits/stdc++.h"
//PRAY :DOLPHINGARLIC: orz orz orz orz orz 
//PRAY :DORI: orz orz orz orz orz orz orz 
//PRAY :SAHIL KUCHLOUS: orz orz orz orz orz
//pray :stefan: orz orz orz orz orz orz orz
//pray :foshy: orz orz orz orz orz orz orz
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define Int long long
#define elif else if
#define test Int t; cin>>t; while(t--)

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    int n; cin>>n; 
    vector<int> v(n);
    for(int i {};i<n;i++)cin>>v[i];
    sort(all(v));
	int d{};
	for(int i {};i<n;i+=2) d += abs(v[i]-v[i+1]);
	cout << d << endl;
	return 0;
}
/*
10:02 PM
9/21/2020 m/dd/yyyy
*/
