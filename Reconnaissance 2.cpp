#include <iostream>
 
using namespace std;
 
int main() {
    int n,f,s=0;
    cin>>n;
    f=n-1;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++) {
         if(abs(a[f]-a[s])>abs(a[i]-a[i+1])){
            f=i,s=i+1;
        }
    }
    cout<<f+1<<" "<<s+1;
    return 0;
}
