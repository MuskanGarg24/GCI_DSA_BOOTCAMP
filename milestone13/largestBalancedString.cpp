#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        string s;
        cin>>s;
        map<int, int> m;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='('){
                m[1]++;
            }
            if(s[i]==')'){
                m[2]++;
            }
            if(s[i]=='{'){
                m[3]++;
            }
            if(s[i]=='}'){
                m[4]++;
            }
            if(s[i]=='['){
                m[5]++;
            }
            if(s[i]==']'){
                m[6]++;
            }
        }
        int count;
        count = min(m[1], m[2]) + min(m[3], m[4]) + min(m[5], m[6]);
        cout<<2*count<<endl;
    }
}