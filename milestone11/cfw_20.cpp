// program to sort even and odd elements of an array seperately


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

    int temp;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]%2==0 || arr[j]%2!=0){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    cout<<"sorted array = ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
