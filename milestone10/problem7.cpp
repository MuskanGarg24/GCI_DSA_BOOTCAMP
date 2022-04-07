#include<iostream>
using namespace std;


void check(int n){
    int prime=1;
    for(int i=2; i<n; i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
    if(prime==1){
        cout<<"The number is prime";
    }
    else{
        cout<<"The number is not prime";
    }
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    check(n);
    return 0;
}