// c program to put even and odd elements in two seperate arrays


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

    int e=0, o=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            e++;
        }
        else{
            o++;
        }
    }

    int even[e],odd[o];

    e=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            even[e]=arr[i];
            e++;
        }
    }

    o=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2!=0){
            odd[o]=arr[i];
            o++;
        }
    }
    
    cout<<"even numbers array: ";
    for(int i=0; i<e; i++){
        cout<<even[i]<<" ";
    }
    cout<<"\nodd numbers array: ";
    for(int i=0; i<o; i++){
        cout<<odd[i]<<" ";
    }
    return 0;
}