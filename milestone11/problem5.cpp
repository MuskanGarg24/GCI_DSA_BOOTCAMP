// Write a program to find the sum and product of all elements of an array.

#include<iostream>
using namespace std;


void setArray(int n, int arr[]){
    cout<<"enter array elements\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void getArray(int n, int arr[]){
    cout<<"Array: \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){

    int sum=0;
    int product=1;

    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];

    setArray(n,arr);
    getArray(n,arr);

    for(int i=0; i<n; i++){
        sum=sum+arr[i];
        product=product*arr[i];
    }
    cout<<endl;
    cout<<"Sum = "<<sum<<endl;
    cout<<"Product = "<<product<<endl;
    return 0;
}