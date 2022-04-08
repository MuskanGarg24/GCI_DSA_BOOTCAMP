/*
Take an array of length n where all the numbers are nonnegative and unique. Find the element in the array possessing the highest value. Split the element into two parts where first part contains the next highest value in the array and second part hold the required additive entity to get the highest value. Print the array where the highest value get splitted into those two parts.
Sample input: 4 8 6 3 2
Sample output: 4 6 2 6 3 2
*/

#include<iostream>
#include<limits.h>
using namespace std;

int max1,max2;
int i,j,k;

void setArray(int n, int arr1[]){
    cout<<"enter array elements\n";
    for(i=0; i<n; i++){
        cin>>arr1[i];
    }
}

void getArray(int n, int arr1[]){
    cout<<"array = ";
    for(i=0; i<n; i++){
        cout<<arr1[i]<<" ";
    }
}

void MAX(int n, int arr1[]){
    max1=max2=INT_MIN;
    for(i=0; i<n; i++){
        if(arr1[i]>max1){
            max2=max1;
            max1=arr1[i];
            j=i;
        }
        else if(arr1[i]>max2 && arr1[i]<max1){
            max2=arr1[i];
        }
    }
}

void NewArr(int n,int arr1[], int arr2[]){
    cout<<"\nNew Array = ";
    for(i=0; i<j; i++){
        arr2[i]=arr1[i];
    }
    arr2[j]=max2;
    arr2[j+1]=max1-max2;
    for(i=j+2; i<n+1; i++){
        arr2[i]=arr1[i-1];
    }
    for(i=0; i<n+1; i++){
        cout<<arr2[i]<<" ";
    }
}


int main(){

    int n;
    cout<<"enter size of array : ";
    cin>>n;

    int arr1[n];
    int arr2[n+1];

    setArray(n,arr1);
    getArray(n,arr1);    
    MAX(n,arr1);
    NewArr(n,arr1,arr2);

    return 0;
}