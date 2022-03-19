// HCF of two numbers

#include<iostream>
using namespace std;

int main(){

    // input two numbers
    int a, b;
    cout<<"enter two numbers a and b: ";
    cin>>a>>b;

    // finding max of two numbers
    int max;
    if(a>b){
        max=a;
    }
    else{
        max=b;
    }

    //finding LCM
    int LCM;
    while(1){
        if(max%a==0 && max%b==0){
            LCM=max;
            break;
        }
        max+=max;
    }

    //finding HCF
    int HCF;
    HCF=((a*b)/LCM);
    cout<<"HCF of "<<a<<" and "<<b<<" is "<<HCF;
    return 0;
}