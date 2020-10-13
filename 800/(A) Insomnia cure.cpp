#include "bits/stdc++.h"

#define gOdSpEeD ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(0)
#define Int long long
#define all(x) x.begin(), x.end()
#define el '\n'
#define ints unsigned
#define cy cout << "YES" << end 
#define cn cout <<"NO" << end
#define elif else if
#define test int t; cin>>t; while(t--)

using namespace std;

/*
In simpler words you will be given 
k, l, m, n and d as inputs. now you need 
to count the numbers starting from 1 and 
ending at d, which are divisible by atleast 
one of k,l,m,n;
Explanation of sample input 1 :
here d=12, so you need to count numbers 
from 1,2,3,.....,12 which are divisible 
by atleast one of (1,2,3,4). You can observe 
that count = 12.
*/
int main () {
    gOdSpEeD;
    int k,l,m,n,d;cin >> k>>l>>m>>n>>d;
    int count{};
    if(d>=k&&d>=l&&d>=m&&d>=n){
    	for(int i=1;i<d+1;++i){
    		if(i%k==0||i%l==0||i%m==0||i%n==0) 
    			count++;
    	}
    }
    cout << count << endl;
    return 0;
}
