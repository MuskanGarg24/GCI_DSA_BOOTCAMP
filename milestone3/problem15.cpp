#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter num: ";
    cin>>num;

    int rem;
    int product=1;
    while(num!=0){
        rem=num%10;
        product = product*rem;
        num=num/10;
    }
    cout<<"product = "<<product;
    return 0;
}