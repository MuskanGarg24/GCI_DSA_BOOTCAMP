// Write a program to concatenate one string contents to another.

#include <iostream>
#include<string>
using namespace std;


int main(){
    
    cout<<"enter string 1: ";
    string s1;
    getline(cin,s1);

    cout<<"enter string 2: ";
    string s2;
    getline(cin,s2);

    cout<<s1+s2;

    return 0;
}

