// program to find strong numbers between 1 to n


#include<iostream>
using namespace std;


int main(){
    // declaring variables
    int n;
    int i;
    int num;
    int rem;
    int j;
    int factorial;
    int sum;

    // taking input for n
    cout<<"enter the upper limit: ";
    cin>>n;

    // strong numbers
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
    return 0;
}