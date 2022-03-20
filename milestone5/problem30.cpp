// check whether a number is armstrong or not?
// 123 --> sum of each digit raise to the power number of digits is the same number

#include<iostream>
#include<math.h>
using namespace std;


int main(){

    // input the number
    int num;
    cout<<"enter number: ";
    cin>>num;

    // counting the number of digits
    int count;
    count = int(log10(num))+1;

    // armstrong number
    int n=num;
    int rem;
    int sum=0;
    while(n>0){
        rem=n%10;
        sum=sum+pow(rem,count);
        n=n/10;
    }
    cout<<sum<<endl;
    
    // checking for armstrong or not
    if(num==sum){
        cout<<"number is armstrong";
    }
    else{
        cout<<"number is not armstrong";
    }
    return 0;
}