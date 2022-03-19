//LCM of two numbers

#include<iostream>
using namespace std;


int main(){

    // taking two numbers
    int a,b;
    cout<<"enter a and b: ";
    cin>>a>>b;

    // finding max of two numbers 
    int max;
    if(a>b){
        max=a;
    }
    else{
        max=b;
    }

    //finding lcm
    int LCM;
    while(1){
        if(max%a==0 && max%b==0){
            LCM=max;
            break;
        }
        max+=max;
    }
    cout<<"LCM = "<<LCM;
    return 0;
}