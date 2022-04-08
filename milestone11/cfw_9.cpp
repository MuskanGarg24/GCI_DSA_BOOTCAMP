// program to insert an element in an array

#include<iostream>
using namespace std;

int main(){

    int arr[6]={1,2,3,4,5};
    int pos, num;
    cout<<"enter the index: ";
    cin>>pos;
    cout<<"enter the number: ";
    cin>>num;
    for(int i=4; i>=pos; i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=num;
    cout<<"New Array = ";
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}