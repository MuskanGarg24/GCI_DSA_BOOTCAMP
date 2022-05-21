// program to find length of string 


#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;
    getline(cin,str);

    cout<<"length = "<<str.size();

    return 0;
}