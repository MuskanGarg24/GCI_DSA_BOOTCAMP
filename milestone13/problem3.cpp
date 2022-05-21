// Write a program to count number of words in string.

#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;

    cout<<"enter a string : ";
    getline(cin,str);

    int count=0;
    for(int i=0; i<str.size(); i++){
        if(str[i]==' '){
            count++;
        }
    }
    cout<<"Total number of words in string = "<<count+1;
    return 0;
}