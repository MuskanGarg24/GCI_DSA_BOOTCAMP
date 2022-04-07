#include<iostream>
using namespace std;

void check(int n){
    if(n%2==0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
}



int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<"The number is ";
    check(n);
    return 0;
}