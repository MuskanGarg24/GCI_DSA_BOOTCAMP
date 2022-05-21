#include <bits/stdc++.h>
using namespace std;

int main(){
    long long mod = 1000000007;
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        map<char, long long int> m;
        for (int i = 0; i < s.size(); i++){
            m[s[i]]++;
        }
        long long multi=1;
        for (auto &it : m){
            multi = (multi*it.second) % mod;
        }
        cout <<multi<<endl;
    }
    return 0;
}