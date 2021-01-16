#include "bits/stdc++.h"
#define len(X) (int)(X).size()
#define elif else if
#define test int tt;cin>>tt;while(tt--)
using namespace std;
const int /*MAXN = 3e5+1,*/INF = 2e9+1;

void IO(string Bessie);

int main(){
    IO("");//

    test {
        int n,m;cin>>n>>m;
        vector<vector<int>> adj(n+1);
        for(int i=0,a,b;i<m;++i) {
            cin>>a>>b,--a,--b;
            adj[a].push_back(b),adj[b].push_back(a);
        }

        vector<bool> visited(n+1),colour(n+1);
        visited[0] = true;        

        queue<int> layer;
        layer.push(0);

        while(not layer.empty()) {
            int Cur = layer.front();
            colour[Cur] = true;
            for(auto I:adj[Cur]) {
                if(colour[I] == 1) colour[Cur] = 0;
                if(not visited[I]) {
                    layer.push(I);
                    visited[I] = true;
                }
            }
            layer.pop();
        }

        bool ye = false; 
        vector<int> ans;
        for(int i {};i<n;++i) {
            if(not visited[i]) {
                cout << "NO\n";
                ye = true;
                break; 
            }
            if(colour[i]) ans.push_back(i+1); 
        }

        if(ye) continue;

        cout << "YES\n" << len(ans)<<'\n';
        for(auto I:ans) cout << I << ' ';
        cout << '\n';

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
1/17/2021 m/dd/yyyy
*/
