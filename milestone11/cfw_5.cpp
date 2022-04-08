// write a program to find second largest element in an array.

#include<iostream>
#include<limits.h>
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

    int max1,max2;
    max1=max2=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2 && arr[i]<max1){
            max2=arr[i];
        }
    }
    
    cout<<"second largest = "<<max2;


    return 0;
}