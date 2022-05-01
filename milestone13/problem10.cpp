//Write a program to convert a string in uppercase.


#include<iostream>
#include<string>
using namespace std;

int main(){

    string s;
    cout<<"enter string in lowercase: ";
    getline(cin,s);

    cout<<"string in uppercase: ";
    for(int i=0; i<s.size(); i++){
        if(s[i]==' '){
            cout<<" ";
        }
        else{
            s[i]=s[i]-32;
            cout<<s[i];
        }
    }

    return 0;
}