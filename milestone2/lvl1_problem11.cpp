#include<iostream>
using namespace std;

int main(){
    char var;
    cout<<"Enter character: ";
    cin>>var;
    if(var>='A' && var<='Z'){
        cout<<"Character is in uppercase";
    }
    else{
        cout<<"Character is in lowercase";
    }
    return 0;
}