#include<iostream>
using namespace std;

int main(){
    int num, rem, count=0;
    cout<<"enter num: ";
    cin>>num;
    while(num>0){
        rem=num%10;
        count++;
        num=num/10;
    }
    cout<<"number of digits in number is "<<count;
    return 0;
}