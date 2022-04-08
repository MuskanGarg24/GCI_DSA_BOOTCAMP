// write a c program to print all negative elements in an array

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter n: ";
    cin>>n;

    int arr[n];

    cout<<"enter array elements\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"negative elements: ";
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            cout<<arr[i]<<"\t";
        }
    }

    return 0;
}