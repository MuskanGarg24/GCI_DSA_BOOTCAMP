// write a program to copy all elements of an array to another array.

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter n: ";
    cin>>n;

    int arr[n];

    cout<<"enter array  elements\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int New[n];
    cout<<"New copied array\n";
    for(int i=0;i<n;i++){
        New[i]=arr[i];
        cout<<New[i]<<" ";
    }

    return 0;
}