#include <bits/stdc++.h>
 
#define IO if(fopen("input.txt","r")) freopen("input.txt","r",stdin), freopen("output.txt","w",stdout)
#define ForCows ios_base::sync_with_stdio(false);cin.tie(NULL)
#define Int long long
#define all(x) begin(x),end(x)
#define endl "\n"
 
using namespace std;
 
int main(){
	IO;
	ForCows;
	int count{0};
	int s; cin >> s;
	while(s--){
		string k; cin >> k;
		if(k[0]=='+'||k[k.size()-1]=='+') count++;
		else count--;
	}
	cout << count << endl;
	return 0;
}
