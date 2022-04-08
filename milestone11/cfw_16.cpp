// program to find reverse of an array

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
    cout<<"array = ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"reversed array = ";
    for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}