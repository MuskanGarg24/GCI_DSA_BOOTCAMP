#include<iostream>
#include<math.h>
using namespace std;


void prime(int n){
    int count=0;
    for(int i=2; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==1){
        cout<<n<<" is prime"<<endl;
    }
    else{
        cout<<n<<" is not prime"<<endl;
    }
}


void armstrong(int n){
    int num;
    int sum=0;
    int rem;
    int digits;
    digits = log10(n)+1;
    num=n;
    while(num>0){
        rem=num%10;
        sum=sum+pow(rem,digits);
        num=num/10;
    }
    if(n==sum){
        cout<<n<<" is armstrong"<<endl;
    }
    else{
        cout<<n<<" is not armstrong"<<endl;
    }
}


void perfect(int n){
    int sum=0;
    int num;
    num=n;
    for(int i=1; i<num; i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(n==sum){
        cout<<n<<" is perfect"<<endl;
    }
    else{
        cout<<n<<" is not perfect"<<endl;
    }
}

int main(){
    int num;
    cout<<"enter number: ";
    cin>>num;
    prime(num);
    armstrong(num);
    perfect(num);
    return 0;
}