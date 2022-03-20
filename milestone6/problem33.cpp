// program to find all the perfect numbers between 1 to n

#include<iostream>
using namespace std;

int main(){
    
    // declaring variables
    int n;
    int i;
    int j;
    int sum;

    // taking input for n
    cout<<"enter the upper limit: ";
    cin>>n;

    // printing numbers
    cout<<"Perfect numbers between 1 to "<<n<<" : ";
    for(i=2; i<n; i++){
        sum=0;
        for(j=1; j<i; j++){
            if(i%j==0){
                sum=sum+j;
            }
        }
        if(i==sum){
            cout<<i<<" ";
        }
    }

    return 0;
}

