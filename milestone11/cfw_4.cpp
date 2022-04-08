// write a program to find maximum and minimum element in an array

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

    int max=0, min=arr[0];

    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }

    cout<<"Maximum element = "<<max<<"\n";
    cout<<"Minimum element = "<<min<<"\n";
    return 0;
}