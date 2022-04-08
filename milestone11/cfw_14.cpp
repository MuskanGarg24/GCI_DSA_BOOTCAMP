// program to delete duplicate elements from an array


#include<iostream>
using namespace std;


int main(){

    int i,j;

    int n;
    cout<<"enter size: ";
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

    // deleting duplicate elements

    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }

    cout<<"\narray after deleting duplicate elements = ";
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}