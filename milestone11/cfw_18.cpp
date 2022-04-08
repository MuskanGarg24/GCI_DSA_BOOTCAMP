// write a program to search an element in an array

#include<iostream>
using namespace std;


int search(int n, int arr[], int key){
    for(int i=0;i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}


int main(){

    int n;
    cout<<"enter n: ";
    cin>>n;

    int arr[n];

    cout<<"enter array elements\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"enter key: ";
    cin>>key;

    cout<<"key found at "<<search(n,arr,key);

    return 0;
}