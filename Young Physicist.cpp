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
    int n;cin >> n;
 	int arrx[n];
 	int arry[n];
 	int arrz[n];
 	int x{0};
 	int y{0};
 	int z{0};
    for(int i {0}; i<n; i++){
    	cin >> arrx[i] >> arry[i] >> arrz[i];
    	x += arrx[i];
    	y += arry[i];
    	z += arrz[i];
    }
    if(x==0&&y==0&&z==0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
