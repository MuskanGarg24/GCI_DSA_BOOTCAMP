// program to convert a string in lowercase

#include<iostream>
#include<string>
using namespace std;

int main(){

    string s;
    cout<<"enter string in uppercase: ";
    getline(cin,s);

    cout<<"string in lowercase: ";
    for(int i=0; i<s.size(); i++){
        if(s[i]==' '){
            cout<<" ";
        }
        else{
            s[i]=s[i]+32;
            cout<<s[i];
        }
    }

    return 0;
}