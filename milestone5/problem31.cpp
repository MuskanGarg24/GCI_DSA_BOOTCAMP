// program to find armstrong numbers between 1 to n

#include<iostream>
#include<math.h>
using namespace std;


int main(){
    //declaring variables
    int n;
    int i;
    int rem;
    int count;
    int sum;
    int num;

    // taking input for upper limit
    cout<<"enter the upper limit: ";
    cin>>n;


    // printing armstrong numbers
    cout<<"armstrong numbers: ";
    for(i=1; i<=n; i++){
        sum=0;
        num=i;
        count = int(log10(num))+1;
        while(num>0){
            rem=num%10;
            sum=sum+pow(rem,count);
            num=num/10;
        }
        if(i==sum){
            cout<<i<<" ";
        }
    }
    return 0;
}