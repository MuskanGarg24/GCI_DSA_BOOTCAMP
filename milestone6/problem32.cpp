// program to check a number is perfect or not?
// perfect number --> sum of all its divisors(excluding itself ) is the same number.


#include<iostream>
using namespace std;

int main(){

    // declaring variables
    int num;
    int i;
    int sum=0;
    
    // taking num as a input
    cout<<"enter the number: ";
    cin>>num;

    // factors
    for(i=1; i<num; i++){
        if(num%i==0){
            sum=sum+i;
        }
    }

    // checking for perfect number or not
    if(num==sum){
        cout<<"The number is perfect";
    }
    else{
        cout<<"The number is not perfect";
    }

    return 0;
}