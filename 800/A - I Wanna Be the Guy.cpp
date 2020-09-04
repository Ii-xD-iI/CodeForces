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
	vector<bool> vec(n,false);
	int a;cin>>a;while(a--){int ae;cin>>ae;vec[ae-1]=true;}int b;cin>>b;while(b--){int be{};cin>>be;vec[be-1]=true;}int cnt{};for(int i {};i<n;i++){if(vec[i]==true)cnt++;}if(cnt==n)cout << "I become the guy." << endl;else cout <<  "Oh, my keyboard!" << endl;return 0;
}


//slot 5
//no adjecent B
//repetition allowed
//2^5==32
