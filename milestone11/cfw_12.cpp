// program to print all the unique elements in an array

#include<iostream>
using namespace std;

int main(){
    int i,j;
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

    // printing unique elements
    cout<<"\nUnique elements = ";
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(arr[i]==arr[j]){
                break;
            }
        }
        if(i==j){
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}