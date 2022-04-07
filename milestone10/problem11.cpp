#include<iostream>
using namespace std;


void factors(int n){
    for(int i=2; n>1; i++){
        if(n%i==0){
            for(i=2; i<=i/2; i++){
                cout<<i<<" ";
                n=n/i;
            }
        }
    }
}


int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<"the prime factors are ";
    factors(n);
    return 0;
}