// to find whether a number is present in the array or not

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


int search(int n, int arr[], int key){
    for(int i=0; i<n; i++){
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

    setarray(arr,n);
    getArray(arr,n);

    int key;
    cout<<"\nenter key: ";
    cin>>key;

    cout<<search(n,arr,key);
    return 0;
}