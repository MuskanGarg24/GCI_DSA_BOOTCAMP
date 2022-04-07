// program to print armstrong numbers between a given interval

#include<iostream>
#include<math.h>
using namespace std;


void armstrong(int n){
    int sum;
    int count;
    int num;
    int rem;
    cout<<"armstrong numbers: ";
    for(int i=1; i<=n; i++){
        sum=0;
        num=i;
        count = int(log10(num))+1;
        while(num!=0){
            rem=num%10;
            sum=sum+pow(rem,count);
            num=num/10;
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
    armstrong(n);
    return 0;
}