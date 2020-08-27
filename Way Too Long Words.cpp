#include<iostream>
using namespace std;
 
int main(){
    int n{};
    cin >> n;
    for (int i {0};i < n ;i++) {
        string ll;
        cin >> ll;
        if (ll.length()>10){         
            cout << ll[0];
            cout << ll.length()-2;
            cout << ll[ll.length()-1] << endl;
        }else{
            cout << ll << endl;;
        }
    }
    
    return 0;
}
