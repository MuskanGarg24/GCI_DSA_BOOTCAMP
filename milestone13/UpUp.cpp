/*
You are given a string S. S consists of several words separated by one or more spaces. Word consists of Latin letters as well as other symbols (but not spaces).
In each word which starts from lowercase Latin letter replace starting letter with uppercase Latin letter.
*/


#include<iostream>
#include<string>
using namespace std;

int main(){

    string s;
    getline(cin,s);

    for(int i=0; i<s.length(); i++){
        if(s[0]>='a' && s[0]<='z'){
            s[0]=s[0]-32;
        }
        if(s[i]==' ' && (s[i+1]>='a' && s[i+1]<='z')){
            s[i+1]=s[i+1]-32;
        }
    }
    cout<<s;
    return 0;
}