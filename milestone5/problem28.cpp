// sum of prime numbers between 1 to n


#include<iostream>
using namespace std;


int main(){
    int sum=0;
    int i,j;
    int prime;
    int n;
    cout<<"enter n: ";
    cin>>n;
    for(i=2; i<n; i++){
        prime=1;
        for(j=2; j<=i/2; j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime==1){
            cout<<i<<" ";
            sum=sum+i;
        }
    }
    cout<<"\nsum = "<<sum;
    return 0;
}