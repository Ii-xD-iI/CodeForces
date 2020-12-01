#include "bits/stdc++.h"
 
using namespace std;

#define all(x)   (x).begin(), (x).end()
#define test     int t;cin>>t;while(t--)
// #define IO(NAME) ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(0); if(fopen(NAME ".in", "r")) freopen(NAME ".in", "r", stdin),freopen(NAME ".in", "w", stdout); 
#define len(x)   (int)(x).size()
#define elif     else if
#define bignum   1e9+1

//----------------Prototypes------------------
void IO(string Bessie);
//-----------------Globals--------------------

//-------------------x-x----------------------


int main(){
	IO("");//codeforces
	test{
		int n;cin>>n;
		vector<int> v(n);
		int ans{};
		for(int i {};i<n;++i) cin>>v[i];
		vector<int> rem(3);//freq table
		for(auto i: v){
			rem[i%3]++;
		}
		ans += rem[0];
		ans += min(rem[1] , rem[2]);
		ans += ((rem[1] - min(rem[1] , rem[2])) + ( rem[2] - min(rem[1] , rem[2]))) / 3;
		cout << ans << '\n';
	}
	return 0;
}

void IO(string Bessie = "") { 
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);
    if (len(Bessie)) {
        freopen((Bessie+".in").c_str(), "r", stdin);
        freopen((Bessie+".out").c_str(), "w", stdout);
     }
}
/*
12/1/2020 zio :rapid: 
*/
