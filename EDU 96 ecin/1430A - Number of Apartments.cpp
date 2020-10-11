#include "bits/stdc++.h"
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define elif else if
#define test int t;cin>>t;while(t--)
//#define SETIO(s) ios_base::sync_with_stdio(0); cin.tie(0);freopen((s+".in").c_str(),"r",stdin);freopen((s+".out").c_str(),"w",stdout);
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
 
    test{
    	int n;
        cin >> n;
        int f3{};
        int f5{};
        int f7{};
        if(n<=2 || n==4) {cout << -1 << endl;continue;}
        if(n%3==0 && n>0){
            f3 += n/3;
            n = 0;
        } 
        elif(n%5==0 && n>0){
            f5 += n/5;
            n = 0;
        }
        elif(n%7==0){
            f7 += n/7;
            n=0;
        }
        if(n>0) {
            while((n-3)%5!=0 && (n-3)%7!=0 && n>0) {
                if(n%3==0){f3 += n/3;n = 0;}
                else {f3++;n -= 3;}
            }
            if((n-3)%5==0 && n>0){f5 += n/5;n = 0;f3++;}
            if((n-3)%7==0 && n>0){f7 += n/7;n = 0;f3++;}
        }
        cout << f3 << " " << f5 << " " << f7 << '\n';
    }
    return 0;
}
//taskkill /IM "main.exe" /F
/*
10/11/2020 mm/dd/yyyy
*/
