/*
Define a function named 'perfect' that determines if parameter number is a perfect number. Use this function in a program that determines and prints all the perfect numbers between 1 and 1000.
[An integer number is said to be "perfect number" if its factors, including 1(but not the number itself), sum to the number. E.g., 6 is a perfect number because 6=1+2+3].
*/

#include<iostream>
using namespace std;

void perfect(int n){
    cout<<"perfect numbers\n";
    int sum;
    for(int i=1; i<=n; i++){
        sum=0;
        for(int j=1; j<i; j++){
            if(i%j==0){
                sum=sum+j;
            }
        }
        if(sum==i){
            cout<<i<<" ";
        }
    }
}


int main(){
    int n;
    cout<<"enter upper limit: ";
    cin>>n;
    perfect(n);
    return 0;
}