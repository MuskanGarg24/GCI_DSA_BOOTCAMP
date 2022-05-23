#include<bits/stdc++.h>
using namespace std;


int main(){
    string s,res="";
    cin>>s;
    int i,j;
    for(i=0;i<s.size();i++){
        for(j=0;j<s.size();j++){
            if(s[i]==s[j]){
                break;
            }
        }
        if(i==j){
            res+=s[i];
        }
    }
    cout<<res<<endl;
    return 0;
}