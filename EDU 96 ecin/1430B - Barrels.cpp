#include "bits/stdc++.h"
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define elif else if
#define test int t;cin>>t;while(t--)
//#define SETIO(s) ios_base::sync_with_stdio(0); cin.tie(0);freopen((s+".in").c_str(),"r",stdin);freopen((s+".out").c_str(),"w",stdout);
using namespace std;
 
// int solve(int& n){
//     while()
// }
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
 
    // test{
    //     solve(int& x);
    // }
    test{
    	long long n;cin>>n;
    	long long k;cin>>k;
    	vector<long long> v(n);for(int i {};i<n;++i) cin>>v[i];
    	sort(rall(v));
    	if(n==1) {cout <<v[0] << '\n';continue;} 
    	long long i{};
    	while(k--){
    		v[i+1] += v[i];
    		v[i]=0; 
    		i++;
    	}
    	cout << abs(*max_element(all(v))-*min_element(all(v))) << endl;
    }
    return 0;
}
 
 
//taskkill /IM "main.exe" /F
/*
10/11/2020 mm/dd/yyyy
*/
