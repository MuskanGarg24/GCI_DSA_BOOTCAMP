// program to generate fibonacci series upto n numbers


#include<iostream>
using namespace std;

int main(){

    // declaring variables
    int n;
    int i;
    int a=0;
    int b=1;
    int c=0;

    // taking input for n
    cout<<"Enter the total numbers of series: ";
    cin>>n;

    // generating series
    cout<<"series is: ";
    for(i=0; i<=n; i++){
        cout<<c<<" ";
        a=b;
        b=c;
        c=a+b;   
    }
    return 0;
}