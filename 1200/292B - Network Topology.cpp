#include "bits/stdc++.h"
#define len(X) (int)(X).size()
#define elif  else if
using namespace std;
const int MAXN=1e5+1,INF = 2e9+1;
int N,M;
 
vector<vector<int>> adj(MAXN);
 
 
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    cin>>N>>M;
    for(int i=0,a,b;i<M;++i) {
        cin>>a>>b,--a,--b;
        adj[a].push_back(b),adj[b].push_back(a);
    }
 
    // for(int i {};i<N;++i) {
    //     cout << i+1 << " :";
    //     for(int j{};j<len(adj[i]);++j) {
    //         cout << j+1 << " ";
    //     }
    //     cout << '\n';
    // }
    //star check
        bool ye = false;
        int cnt=0;
        int idk{};
        int only{};
        for(int i {};i<N;++i) {
            if(len(adj[i]) == 1) cnt++;
            elif(len(adj[i]) == N-1 and ye == false) {ye = true;only = 1;}
            else idk++;
        }
 
        if(cnt == N-1 and ye == true and idk==0 and only == 1) {
            cout << "star topology\n";
            return 0;
        }
    //----------
 
    //ring check
        cnt =0;
        idk=0;
 
        for(int i {};i<N;++i) {
            if(len(adj[i]) == 2) cnt++;
            else idk++;
        }
 
        if(cnt == N and idk == 0) {
            cout << "ring topology\n";
            return 0;
        }
    //----------
 
    //bus check works
        int one{};
        cnt=0,idk=0;
 
        for(int i {};i<N;++i) {
            if(len(adj[i]) == 1) one++;
            elif(len(adj[i]) == 2) cnt++;
            else idk++;
        }
 
        if(one == 2 and cnt == N-2) {
            cout << "bus topology\n";
            return 0;
        }
    //----------
 
    cout << "unknown topology\n";
 
    return 0;
}
/*
1/19/2020 m/dd/yyyy
*/
