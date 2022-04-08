// Write a program to check if elements of an array are same or not it read from front or back.

#include<iostream>
using namespace std;

int main(){

    int flag=1;
    int arr[]={2,3,15,15,3,2};
    int NewArr[6];

    for(int i=0; i<6; i++){
        NewArr[5-i]=arr[i];
    }
    
    for(int i=0; i<6; i++){
        cout<<NewArr[i]<<" ";
    }

    for(int i=0; i<5; i++){
        if(NewArr[i]!=arr[i]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"Array is same from both ends";
    }
    else{
        cout<<"Array is not same from both ends";
    }
    return 0;
}