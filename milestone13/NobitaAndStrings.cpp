#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int test = t+1;
    while(test--){
        string s;
        getline(cin, s);
        string result="";
        int i=0;
        int n=s.length();
        while(i<n){
            while(i<n && s[i]==' '){
                i++;
            }
            if(i>=n){
                break;
            }
            int j=i+1;
            while(j<n && s[j]!=' '){
                j++;
            }
            string sub=s.substr(i,j-i);
            if(result.length()==0){
                result = sub;
            }
            else{
                result=sub+' '+result;
            }
            i=j+1;
        }
        cout<<result<<endl;
    }
    return 0;
}