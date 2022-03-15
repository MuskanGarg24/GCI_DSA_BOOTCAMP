#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter num: ";
    cin>>num;
    if(num==0){
        cout<<"input number is zero";
    }
    else if(num>0){
        cout<<"input number is positive";
    }
    else{
        cout<<"input number is negative";
    }
    return 0;
}