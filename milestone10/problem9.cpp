#include<iostream>
using namespace std;


int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}


int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    cout<<"Factorial is "<<factorial(n);
    return 0;
}