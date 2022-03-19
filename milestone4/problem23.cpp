// factorial of a number

#include<iostream>
using namespace std;


int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num;
    int factorial = 1;
    int i=1;
    while(i<=num){
        factorial=factorial*i;
        i++;
    }
    cout<<"factorial of "<<num<<" is "<<factorial;
    return 0;
}