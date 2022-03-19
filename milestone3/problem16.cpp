#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter num: ";
    cin>>num;
    int rem, rev=0;
    while(num!=0){
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    cout<<"reverse of the number is "<<rev;
    return 0;
}