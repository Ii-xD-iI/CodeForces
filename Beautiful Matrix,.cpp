#include <bits/stdc++.h>
 
#define IO if(fopen("input.txt","r")) freopen("input.txt","r",stdin), freopen("output.txt","w",stdout)
#define ForCows ios_base::sync_with_stdio(false);cin.tie(NULL)
#define Int long long
#define all(x) begin(x),end(x)
#define endl "\n"
 
using namespace std;
 
int main () {
	IO;
    ForCows;
    for(int i {1}; i<=5; i++){
    	for(int j {1}; j<=5; j++){
    		int x; cin >> x;
    		if(x == 1){
    			cout << abs(3-i)+abs(3-j) << endl;
    		}
    	}
    }
 
    return 0;
}
