// write a program to merge two arrays to third arrays

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter size of array 1 = ";
    cin>>n;
    int arr1[n];
    cout<<"enter array 1 elements\n";
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }


    int m;
    cout<<"enter size of array 2 = ";
    cin>>m;
    int arr2[m];
    cout<<"enter array 2 elements\n";
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }

    int size=n+m;
    int arr3[size];

    for(int i=0; i<n; i++){
        arr3[i]=arr1[i];
    }
    for(int i=0, j=n; i<m, j<size; i++,j++){
        arr3[j]=arr2[i];
    }
    cout<<"merged array = ";
    for(int i=0; i<size; i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}