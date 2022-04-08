// program to right rotate an array

#include<iostream>
using namespace std;

void setArray(int n, int arr[]){
    cout<<"enter array elements\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void getArray(int n, int arr[]){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void RightArray(int n, int arr[], int rotate){
    int temp;
    cout<<"array after right rotation = ";
    while(rotate--){
        temp=arr[0];
        for(int i=0; i<n-1; i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }
}

int main(){

    int rotate;
    cout<<"enter the number of times you want to rotate the array = ";
    cin>>rotate;

    int n;
    cout<<"enter size: ";
    cin>>n;

    int arr[n];

    setArray(n,arr);
    RightArray(n,arr,rotate);
    getArray(n,arr);

    return 0;
}