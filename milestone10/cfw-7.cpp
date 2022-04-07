#include<iostream>
using namespace std;


void strong(int n){
    int num;
    int i,j;
    int factorial;
    int sum;
    int rem;
    cout<<"strong numbers: ";
    for(i=1; i<=n; i++){
        sum=0;
        num=i;
        while(num>0){
            factorial=1;
            rem=num%10;
            for(j=1; j<=rem; j++){
                factorial=factorial*j;
            }
            sum=sum+factorial;
            num=num/10;
        }
        if(i==sum){
            cout<<i<<" ";
        }
    }
}



int main(){

    int num;
    cout<<"enter the upper limit: ";
    cin>>num;
    strong(num);
    return 0;
}