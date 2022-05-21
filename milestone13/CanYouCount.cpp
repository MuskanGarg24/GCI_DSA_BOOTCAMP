#include<iostream>
#include<string>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        string s;
        cin>>s;
        int a=0,e=0,i=0,o=0,u=0;
        long long combi=1,sum;
        for(int j=0;j<s.length();j++){
            if(s[j]=='a')
            {
                a=1;
            }
            else if(s[j]=='e')
            {
                e=1;
            }
            else if(s[j]=='i')
            {
                i=1;
            }
            else if(s[j]=='o')
            {
                o=1;
            }
            else if(s[j]=='u')
            {
                u=1;
            }
            else if(s[j]=='_')
            {
                sum=a+e+i+o+u;
                combi=combi*sum;
            }
        }
        cout<<combi<<endl;
    }
    return 0;
}