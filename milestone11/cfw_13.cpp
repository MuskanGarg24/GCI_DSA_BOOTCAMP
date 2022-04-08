// program to count total number of duplicate elements in an array

#include<iostream>
using namespace std;

int main(){

    int i,j;
    int n;
    cout<<"enter n: ";
    cin>>n;

    int arr[n];

    cout<<"enter array elements\n";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    int count=0;

    for(i=0;i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(arr[i]!=-1){
                if(arr[i]==arr[j]){
                    count++;
                    arr[j]=-1;
                }
            }
        }
    }
    cout<<"\nTotal number of duplicate elements = "<<count;

    return 0;
}