// chech whether a number is prime or not?

#include<iostream>
using namespace std;


int main(){

    int num;
    cout<<"enter num: ";
    cin>>num;

    int prime=1;
    for(int i=2; i<=num/2; i++){
        if(num%i==0){
            prime=0;
            break;
        }
    }
    if(prime==1){
        cout<<"the number is prime";
    }
    else{
        cout<<"the number is composite";
    }
    return 0;
}