#include "bits/stdc++.h"
//PRAY :DOLPHINGARLIC: orz orz orz
#define GS ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(0)
#define Int long long
#define all(x) x.begin(), x.end()
#define el '\n'
#define ints unsigned
#define Ints unsigned long long 
#define elif else if
#define test int t; cin>>t; while(t--)

using namespace std;


int main(){
	GS;
	int n;cin>>n;
	string s;cin>>s;
	int cntd{};
	int cnta{};
	int sz = s.size();
	for(int i {};i<n;i++){
		if(s[i]=='D')cntd++;
		elif(s[i]=='A')cnta++;
	}
	if(cntd>cnta) cout << "Danik" << endl;
	elif(cnta>cntd) cout << "Anton" << endl;
	elif(cnta == cntd) cout << "Friendship" << endl;
	return 0;
  /*
  3:03 PM
  9/4/2020
  */
