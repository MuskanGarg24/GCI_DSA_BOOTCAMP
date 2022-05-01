// program to reverse a string


#include<iostream>
#include<string>
using namespace std;

void reverse(string s){
    for(int i=s.size(); i>=0; i--){
        cout<<s[i];
    }
}


int main(){

    string s;
    cout<<"enter string : ";
    cin>>s;
    reverse(s);
    return 0;
}