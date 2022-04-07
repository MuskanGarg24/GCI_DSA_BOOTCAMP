// program to print perfect numbers in a given interval

#include<iostream>
using namespace std;

void perfect(int n){
    cout<<"perfect numbers\n";
    int sum;
    for(int i=2; i<=n; i++){
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