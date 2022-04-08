/*Take 10 integer inputs from user and store them in an array. Now, copy all the elements 
in another array but in reverse order*/

#include<iostream>
using namespace std;


int main(){

    int n;
    cout<<"enter n: ";
    cin>>n;

    int arr[n];
    int NewArr[n];

    cout<<"enter array elements\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    int j=0;
    for(int i=n-1; i>=0; i--){
        NewArr[i]=arr[j];
        j++;
        
    }

    cout<<"\nnew array: ";
    for(int i=0; i<n; i++){
        cout<<NewArr[i]<<" ";
    }
    return 0;
}