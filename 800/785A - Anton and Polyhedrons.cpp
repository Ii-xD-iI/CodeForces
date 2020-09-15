#include "bits/stdc++.h"
//PRAY :DOLPHINGARLIC: orz orz orz orz orz 
//PRAY :DORI: orz orz orz orz orz orz orz 
//PRAY :SAHIL KUCHLOUS: orz orz orz orz orz
//pray :stefan: orz orz orz orz orz orz orz
#define GS ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(0)
#define all(x) x.begin(), x.end()
#define el '\n'
#define Int long long
#define elif else if
#define test int t; cin>>t; while(t--)
using namespace std;


int main(){
	GS;
	int sum{};
	test{
		string s;cin>>s;
		if(s=="Tetrahedron") sum += 4;
		elif(s=="Cube") sum += 6;
		elif(s == "Octahedron") sum += 8;
		elif(s == "Dodecahedron") sum += 12;
		elif(s == "Icosahedron") sum += 20;
	} 
	cout << sum << endl;
	return 0;
}
/*
3:44 PM
9/15/2020 m/dd/yyyy
*/
