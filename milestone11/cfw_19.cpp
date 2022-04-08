// program to sort array elements in ascending or descending order


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

    cout<<"sorted arrray = ";
    int temp;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}