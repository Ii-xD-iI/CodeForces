#include "bits/stdc++.h"
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define elif else if
 
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	int n;cin>>n;
	string s = "ROYGBIV";
	int pos{};
	for(int i=1;i<=n-(n%7);++i){
		if(pos <= 6)cout << s.at(pos);
		else {pos=0;cout << s.at(pos);}
		pos++;
	}
	if(n%7==1) cout << "G";
	elif(n%7==2) cout << "GB";
	elif(n%7==3) cout << "YGB";
	elif(n%7==4) cout << "YGBI";
	elif(n%7==5) cout << "OYGBI";
	elif(n%7==6) cout << "OYGBIV";
	cout << endl;
	return 0;
}
//taskkill /IM "main.exe" /F
/*
6:08 PM
10/9/2020 m/dd/yyyy
*/
