#include <iostream>
#include <vector>
using namespace std;
int main () {
    int n {}; 
    cin >> n;
    int count{0};
    while (n--){
        int pi,qi;
        cin >> pi >> qi;
        if ((qi-pi)>1)
            count++;
    }
    cout << count << endl;
    return 0;
}
