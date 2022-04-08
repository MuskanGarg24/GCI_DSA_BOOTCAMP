// Sorting refers to arranging data in a particular format. Sort an array of integers in ascending order. One of the algorithm is selection sort. Use below explanation of selection sort to do this.
// INITIAL ARRAY :
// 2	3	1	45	15
// First iteration : Compare every element after first element with first element and if it is larger then swap. In first iteration, 2 is larger than 1. So, swap it.
// 1	3	2	45	15
// Second iteration : Compare every element after second element with second element and if it is larger then swap. In second iteration, 3 is larger than 2. So, swap it.
// 1	2	3	45	15
// Third iteration : Nothing will swap as 3 is smaller than every element after it.
// 1	2	3	45	15
// Fourth iteration : Compare every element after fourth element with fourth element and if it is larger then swap. In fourth iteration, 45 is larger than 15. So, swap it.
// 1	2	3	15	45



#include<iostream>
using namespace std;

void setarray(int arr[], int n){
    cout<<"enter elements\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void getArray(int arr[], int n){
    cout<<"array\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int n;
    cout<<"enter n: ";
    cin>>n;
    int arr[n];

    setarray(arr,n);
    getArray(arr,n);

    int temp;
    cout<<"\nsorted array\n";
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}