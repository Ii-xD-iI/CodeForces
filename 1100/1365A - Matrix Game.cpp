#include "bits/stdc++.h"
//PRAY :DOLPHINGARLIC: orz orz orz orz orz 
//PRAY :DORI: orz orz orz orz orz orz orz 
//PRAY :SAHIL KUCHLOUS: orz orz orz orz orz
//pray :stefan: orz orz orz orz orz orz orz
//pray :foshy: orz orz orz orz orz orz orz
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define Int long long
#define elif else if
#define test Int t; cin>>t; while(t--)

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    test{
    	int n,m;
    	cin>>n>>m;
    	vector<vector<int>> v(n,vector<int>(m));
    	for(int i {};i<n;i++){
    		for(int j{};j<m;j++){
    			cin>>v[i][j];
    		}
    	}
    	int row{};
    	for(int i {};i<n;i++){
    		bool rowb = true; 
    		for(int j{};j<m;j++){
    			if(v[i][j]==1){rowb=false;break;}
    		}
    		row+=rowb;
    	}
    	int coloum{};
    	for(int i {};i<m;i++){
    		bool coloumb = true;
    		for(int j{};j<n;++j){
    			if(v[j][i]==1){coloumb=false;break;}
    		}
    		coloum += coloumb;
    	}
    	cout << (min(coloum,row)%2 != 0?"Ashish" :"Vivek") << endl;

    }
	return 0;
}
/*
3:42 PM
9/21/2020 m/dd/yyyy
*/
