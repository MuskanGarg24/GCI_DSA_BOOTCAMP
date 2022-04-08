// write a program to find sum of all elements of an array

#include<iostream>
using namespace std;


int main(){

    int sum=0;
    int n;
    cout<<"enter n: ";
    cin>>n;

    int arr[n];

    cout<<"enter array elements\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    cout<<"sum = "<<sum;
    return 0;
}