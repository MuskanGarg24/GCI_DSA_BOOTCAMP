// program to left rotate an array


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

void LeftRotate(int n, int arr[], int shift_count){
    int temp;
    cout<<"\narray after left rotation = ";
    while(shift_count--){
        temp=arr[n-1];
        for(int i=n-1; i>=1; i--){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
    }
}

int main(){

    int shift_count;
    cout<<"enter the number of times you want to rotate = ";
    cin>>shift_count;

    int n;
    cout<<"enter size of array: ";
    cin>>n;

    int arr[n];

    setArray(n,arr);
    LeftRotate(n,arr,shift_count);
    getArray(n,arr);

    return 0;
}