#include "bits/stdc++.h"
//PRAY :ORZ FENCING: orz orz orz orz orz 
//PRAY :DOLPHINGARLIC: orz orz orz orz orz 
//PRAY :DORI: orz orz orz orz orz orz orz 
//PRAY :SAHIL KUCHLOUS: orz orz orz orz orz
//pray :stefan: orz orz orz orz orz orz orz
//pray :foshy: orz orz orz orz orz orz orz
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define elif else if
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    int n; cin>>n; 
    int a;cin>>a;a--;
   	int cnt{};
    vector<int> v(n);
    for(int i {};i<n;++i) cin>>v[i];
    if(v[a]) cnt++;
	int x=a,y=a;
	while(1){
		if(x<=0 || y>=n) break;
		x--;y++;
		if( (v[x]==1 && v[y]==1) ) cnt+=2;
	}
	if(x==0){
		for(int i=y+1;i<n;++i){if(v[i]) cnt++;}
	}
	else{
		for(int i{};i<=x;i++){
			if(v[i]) cnt++;
		}
	}
	cout << cnt;
    return 0;
}
//taskkill /IM "main.exe" /F

/*
6:30 PM
10/2/2020 mm/d/yyyy

fk tons of debugging
*/
