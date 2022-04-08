// program to calculate total number of negative elements in an array

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

    int negative=0;
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            negative++;
        }
    }
    cout<<"total negative elements = "<<negative;
    return 0;
}