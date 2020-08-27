#include "bits/stdc++.h"

#define gOdSpEeD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0)
#define Int long long
#define all(x) x.begin(), x.end()
#define el '\n'
#define ints unsigned
#define cy cout << "YES" << end 
#define cn cout <<"NO" << end
#define elif else if
#define test int t; cin>>t; while(t--)

using namespace std;


int main () {
    gOdSpEeD;
    string s; cin >> s;
    vector<int> v;
    for(int i{};i<s.size();i++){
    	int x;
    	if(s[i]!= '+'){x = s[i]-'0';v.push_back(x);}
    }
    sort(all(v));
    for(int i{};i<v.size();i++){cout<< v[i];if(i!=v.size()-1) cout << '+';}
    cout << endl;
    return 0;
}


/*string s; cin >> s;
    vector<int> v;
    for(int i{};i<s.size();i++){
    	int x;
    	if(s[i]!= '+'){x = s[i]-'0';v.push_back(x);}
    }
    sort(all(v));
    for(int i{};i<v.size();i++){cout<< v[i];if(v[i]!=v.size()-1) cout << '+';}
    	cout << endl;*/