// Write a program to check a string is palindrome or not

#include<iostream>
#include<string>
using namespace std;

int main(){

    bool check=1;

    string s;
    cout<<"enter string: ";
    cin>>s;

    for(int i=0; i<s.size(); i++){
        if(s[i]!=s[s.size()-1-i]){
            check=0;
            break;
        }
    }
    
    if(check==1){
        cout<<"string is palindrome";
    }
    else{
        cout<<"string is not palindrome";
    }

    return 0;
}