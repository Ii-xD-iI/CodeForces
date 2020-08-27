#include <iostream>
#include <string>
using namespace std;
int main () {
    string s;
    cin >> s;
    int cnt =0;
    int size = s.size();
    int dist;
    int i,j;
    for(i=0; i<s.size(); i++) {
        for(j=0; j<i; j++) {
            if(s[i]==s[j]) {
                cnt++;
                break;
            }
        } 
    }  dist = size - cnt;
    if(dist%2==0) {
          cout << "CHAT WITH HER!" << endl;
    } else {
         cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
