// Take 20 integer inputs from user and print the following:
// number of positive numbers
// number of negative numbers
// number of odd numbers
// number of even numbers
// number of 0.


#include<iostream>
using namespace std;

void setarray(int arr[], int n){
    cout<<"enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void getArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int pos=0, neg=0, odd=0, even=0, zeroes=0;

    int n;
    cout<<"enter n: ";
    cin>>n;

    int arr[n];
    setarray(arr,n);
    getArray(arr,n);

    for(int i=0; i<n; i++){
        if(arr[i]==0){
            zeroes++;
        }
        if(arr[i]>0){
            pos++;
        }
        if(arr[i]<0){
            neg++;
        }
        if(arr[i]%2==0 && arr[i]!=0){
            even++;
        }
        if(arr[i]%2!=0){
            odd++;
        }
    }
    cout<<"\n";
    cout<<"total positve values: "<<pos<<endl;
    cout<<"total negative values: "<<neg<<endl;
    cout<<"total even values: "<<even<<endl;
    cout<<"total odd values: "<<odd<<endl;
    cout<<"total zeroes: "<<zeroes<<endl;

    return 0;
}