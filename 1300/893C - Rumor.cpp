#include "bits/stdc++.h"
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define elif else if
 
using namespace std;
 
 
long long n,m;
vector<bool> visited(10000000,false);
vector<long long> gold;//price
map<long,vector<long long>> v;//graph
long long mintotal{};
long long mininit=INT_MAX;
 
 
void dfs(long long& j);
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>n;
    cin>>m;
    for(long long i {};i<n;i++){
        long long w;cin>>w;gold.push_back(w);
    }
    for(long long i {};i<m;i++){
        long long x,y;cin>>x>>y;x--;y--;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(long long i {};i<n;i++){
        if(!(visited[i])){
            dfs(i);
            mintotal += mininit;
            mininit = INT_MAX;
        }
    }
 
    cout << mintotal << '\n';
    return 0;
}
 
void dfs(long long& j){
    if(!visited[j]){
        mininit = min(mininit , gold[j]);
        visited[j] = true;
        for(auto& node: v[j]) dfs(node);
    }
}
 
//taskkill /IM "main.exe" /F

/*
9:10 PM
10/6/2020 mm/d/yyyy
*/
