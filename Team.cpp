#include <iostream>
using namespace std;
int main () {
    int n {};
    cin >> n;
    int total;
    int aa=0;
    for (int i {0};i<n;i++){
        int x , y , z;
        cin >> x >> y >> z;
        total = x + y + z;
        
        if (total > 1)
            aa++;
    }
    cout << aa<< endl;
    return 0;
}
