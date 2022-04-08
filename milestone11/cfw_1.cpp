// write a c program to print and read all elements of an array


#include<iostream>
using namespace std;


void setarray(int arr[], int n){
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
    int n;
    int arr[n];
    cout<<"enter the value of n: ";
    cin>>n;
    setarray(arr,n);
    getArray(arr,n);
    return 0;
}