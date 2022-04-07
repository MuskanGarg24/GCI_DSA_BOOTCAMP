#include<iostream>
using namespace std;


void maxAndmin(int a, int b){
    if(a>b){
        cout<<a<<" is maximum and "<<b<<" is minimum";
    }
    else{
        cout<<b<<" is maximum and "<<a<<" is minimum";
    }
}


int main(){
    int a;
    cout<<"enter first number: ";
    cin>>a;

    int b;
    cout<<"enter second number: ";
    cin>>b;

    maxAndmin(a,b);
    return 0;
}