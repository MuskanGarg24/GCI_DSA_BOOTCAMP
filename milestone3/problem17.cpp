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
    cout<<"reverse is "<<rev;
    
    if(rev==num){
        cout<<"number is palindrome";
    }
    else{
        cout<<"number is not palindrome";
    }
    return 0;
}