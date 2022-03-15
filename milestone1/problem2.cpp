#include<iostream>
using namespace std;


int main(){
    int a,b;
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;
    if(a>b){
        cout<<a<<" is largest";
    }
    else if(a==b){
        cout<<"Both are equal";
    }
    else{
        cout<<b<<" is largest";
    }
    return 0;
}