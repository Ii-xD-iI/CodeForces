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
    
    test{
    	Int n,m;cin>>n>>m;
    	int a{};
    	char c;
    	for(int i {};i<n;i++){
    		for(int j{};j<m;j++){
    			cin>>c;
    			if(j==m-1&&c=='R') a++;
    			if(i==n-1&&c=='D')a++;
    		}
    	}
    	cout << a << '\n';
    }
	return 0;
}
/*
10:14 PM
9/20/2020 m/dd/yyyy
*/
