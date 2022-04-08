// Write a program to print sum, average of all numbers, smallest and largest element of an array.


#include<iostream>
using namespace std;


void setArray(int n, int arr[]){
    cout<<"enter array elements\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void getArray(int n, int arr[]){
    cout<<"Array is\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void largest(int n, int arr[]){
    int max=0;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"the largest element is "<<max<<endl;
}


void smallest(int n, int arr[]){
    int min;
    min=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"the smallest element is "<<min;
}


void sumArray(int n, int arr[]){
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    cout<<"\nthe sum is "<<sum<<endl;
}


void average(int n, int arr[]){
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    int average=sum/n;
    cout<<"the average is "<<average<<endl;
}

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int arr[n];

    setArray(n,arr);
    getArray(n,arr);

    sumArray(n,arr);
    average(n,arr);
    largest(n,arr);
    smallest(n,arr);
    
    return 0;
}