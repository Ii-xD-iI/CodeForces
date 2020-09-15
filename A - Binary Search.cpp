#include "bits/stdc++.h"
 
#define GS ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(0)
#define Int long long
#define all(x) x.begin(), x.end()
#define el '\n'
#define ints unsigned
#define elif else if
#define test int t; cin>>t; while(t--)
 
using namespace std;
 
int main () {
    GS;
    int n;cin>>n;
    int k;cin>>k;//target
    int a[n];for(int i{};i<n;++i)cin>>a[i];    
    int q[k];for(int i {};i<k;i++){cin>>q[i];}
     for(int i {};i<k;i++){
         int l{};
         int r = n-1;
         bool ye=false;
         while(l<=r){
             int mid = l+((r-l)>>1);
             if(a[mid]==q[i]) {ye = true;break;}
             elif(a[mid]<q[i]) l = mid+1;
             elif(a[mid]>q[i]) r = mid-1;
	}
         cout << (ye?"YES":"NO") << endl;
     }
    return 0;
}
/*
11:50 PM
8/29/2020
*/
