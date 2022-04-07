#include<iostream>
using namespace std;

void primeNum(int n){
    int i,j;
    int count=0;
    for(i=2; i<=n; i++){
        for(j=2; j<=i/2;j++){
            if(j%i==0){
                count++;
            }
        }
        if(count==1){
        cout<<i<<" ";
    }
    }
}



int main(){

    int n;
    cout<<"enter the upper limit of interval: ";
    cin>>n;
    primeNum(n);

    return 0;
}