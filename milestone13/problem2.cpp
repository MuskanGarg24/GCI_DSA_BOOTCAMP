// program to display a string from backward

#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;
    cout<<"enter string : ";
    getline(cin,str);

    cout<<"string in reverse order = ";
    for(int i=str.size(); i>=0; i--){
        cout<<str[i];
    }

    return 0;
}