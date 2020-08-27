#include <iostream>
using namespace std;
int main () {
    
    int count = 0;
    int arr[4];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    
    for(int i=0;i<4;i++) {
        bool a = true;
        
        for(int j=0;j<i;j++) {
            
             if(arr[j]==arr[i]) a = false;
            
        } if (a) count++;
            
    }
    cout << 4-count << endl;
    
    return 0;
}
