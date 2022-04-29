/*
Write a user defined function named Upper-half() which takes a two dimensional array A, with size N rows and N columns as argument and prints the upper half of the array.

e.g.,
2 3 1 5 0                              2 3 1 5 0
7 1 5 3 1                                 1 5 3 1
2 5 7 8 1   Output will be:                  1 7 8
0 1 5 0 1                                       0 1
3 4 9 1 5                                          5


*/

#include<iostream>
using namespace std;


void UpperHalf(int array[][5]){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(j>=i){
                cout<<array[i][j];
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}

int main(){

    int arr[][5]={{2,3,1,5,0},
                  {7,1,5,3,1},
                  {2,5,7,8,1},
                  {0,1,5,0,1},
                  {3,4,9,1,5}};

    UpperHalf(arr);
    return 0;
}