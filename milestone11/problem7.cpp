// Find the largest and smallest elements of an array.


#include<iostream>
using namespace std;



int main(){

    int arr[5]={1,2,6,8,5};

    int smallest=arr[0];
    int largest=arr[0];

    for(int i=0; i<5; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }

    cout<<"Largest element: "<<largest<<endl;
    cout<<"Smallest element: "<<smallest<<endl;

    return 0;
}