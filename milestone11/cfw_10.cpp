// program to delete an element at specified position


#include<iostream>
using namespace std;

int main(){
    int i;
    int n;
    cout<<"enter n: ";
    cin>>n;

    int arr[n];

    cout<<"enter array elements\n";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"array = ";
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    int index;
    cout<<"\nenter the index: ";
    cin>>index;

    for(i=index; i<n; i++){
        arr[i]=arr[i+1];
    }

    cout<<"new array = ";
    for(int i=0; i<n-1; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}