#include "bits/stdc++.h"

using namespace std;

#define len(X) (int)(X).size()
#define elif else if
#define all(X) X.begin( ), X.end()
#define test int t;cin>>t;while(t--)
#define ceil(XXX,YYY) (XXX + YYY-1)/YYY 

const int32_t MAXN = 2e5+7 ,INF = 2e9+7,MOD = 1e9+7;
const long long INFLL = 1e18+7;

void IO(string Bessie);
void dfs(int A);

int n,m,cnt{};
bool ye = true;
vector<vector<int>> adj(MAXN);
vector<bool> visited(MAXN);

int32_t main() {
    IO("");

    cin>>n>>m;
    for(int a,b,i{};i<m;++i) {
        cin>>a>>b,--a,--b;
        adj[a].push_back(b),adj[b].push_back(a);
    }
    // for(int i{};i<n;++i) {
    //     cout << i+1 << ": ";
    //     for(int j{};j<len(adj[i]);++j) {
    //         cout << adj[i][j]+1 << " \n"[j+1 == len(adj[i])];
    //     }
    // }
    for(int i {};i<n;++i) {
        if(not visited[i]){
            dfs(i);
            if(ye) {//not a cycle (ring basically)
                cnt++;
            }
            ye = true;
        }
    }
    // for(int i {};i<n;++i) {
    //     cout << visited[i] << ' ';
    // }
    cout << cnt << '\n';
    return 0;
}

void dfs(int A) {
    visited[A] = true;
    
    if(len(adj[A]) != 2) {
        ye=false;
    }
    
    for(auto I: adj[A]) {
        if(not visited[I]) 
            dfs(I);
    }
}

void IO(string Bessie = "") 
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);
    if (len(Bessie)) {
        freopen((Bessie+".in").c_str(), "r", stdin);
        freopen((Bessie+".out").c_str(), "w", stdout);
    } 
}
/*
2/4/2021 m/dd/yyyy
*/
