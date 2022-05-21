/*
You are converting an old code for a new version of the compiler.

In the old code we have used "->" for pointers. But now we have to replace each "->" with a ".". But this replacement shouldn't be done inside commments. A comment is a string that starts with "//" and terminates at the end of the line.


*/

#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
while(getline(cin,s)){
    int flag=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='/' && s[i+1]=='/'){
            flag=1;
        }
        if(flag==0){
            if(s[i]=='-' && s[i+1]=='>'){
                cout<<'.';
                i++;
            }
            else{
                cout<<s[i];
            }
        }
        else{
            cout<<s[i];
        }
    }
    cout<<"\n";
}
    return 0;
}