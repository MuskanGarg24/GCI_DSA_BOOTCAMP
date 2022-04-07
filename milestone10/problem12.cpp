/*
Using recursion, define a function to know nth term of a Fibonacci series.
Nth term of Fibonacci series is
F(n) = F(n-1)+F(n-2)
F(0) = 0
F(1) = 1
F(2) = F(1)+F(0) = 1+0 = 1
F(3) = F(2)+F(1) = 1+1 = 2
F(4) = F(3)+F(2) = 2+1 = 3
*/

#include<iostream>
using namespace std;

int fibonacci(int i){
    if(i==0 || i==1){
        return 1;
    }
    else{
        return fibonacci(i-2)+fibonacci(i-1);
    }
}

int main(){

    int n;
    cout<<"enter n: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<fibonacci(i)<<endl;
    }
    return 0;
}
