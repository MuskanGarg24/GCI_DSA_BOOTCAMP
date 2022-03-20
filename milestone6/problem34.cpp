// program to check whether a number is strong or not?
// 145 --> 1!+4!+5!=145


#include<iostream>
using namespace std;

int main(){

    //declaring variables
    int num;
    int n;
    int rem;
    int factorial;
    int sum=0;

    // taking input for number
    cout<<"enter num: ";
    cin>>num;

    // strong number
    n=num;
    while(n>0){
        factorial=1;
        rem=n%10;
        for(int i=1; i<=rem; i++){
            factorial=factorial*i;
          
        }
        sum=sum+factorial;
        n=n/10;
    }
    cout<<sum<<endl;
    if(num==sum){
        cout<<"number is strong";
    }
    else{
        cout<<"number is not strong";
    }
    return 0;
}