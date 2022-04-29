/*
Write a function in C++ which accepts a 2D array of integers and its size as arguments and displays the elements of middle row and the elements of middle column.
[Assuming the 2D Array to be a square matrix with odd dimension i.e. 3x3, 5x5, 7x7 etc...]
Example, if the array contents is

3  5  4
7  6  9
2  1  8

Output through the function should be :
Middle Row : 7 6 9
Middle column : 5 6 1 */


#include<iostream>
using namespace std;

int i,j;

void fun(int arr[][3]){
    cout<<"enter array elements\n";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
}

void display(int arr[][3]){
    cout<<"2D array\n";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void mRow(int arr[][3]){
    cout<<"Middle row\n";
    for(j=0; j<3; j++){
        cout<<arr[3/2][j]<<" ";
    }
}

void mCol(int arr[][3]){
    cout<<"\nMiddle column\n";
    for(i=0; i<3; i++){
        cout<<arr[i][3/2]<<" ";
    }
}


int main(){

    int array[3][3];

    fun(array);
    display(array);
    mRow(array);
    mCol(array);

    return 0;
}