#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<char,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(int i=1;i<=s.size();i++)
        {
            for(auto &it:m)
            {
                if(it.second==i)
                {
                    for(int j=0;j<i;j++)
                    {
                    cout<<it.first;
                    }
                }
            }
        }
        cout<<'\n';
    }
    return 0;
}