// Write a user-defined function in C++ to display the multiplication of row element of two-dimensional array A[4][6] containing integer.



#include<iostream>
using namespace std;


int product;


void input(int arr[4][6]){
    cout<<"enter matrix elements\n";
    for(int i=0; i<4; i++){
        for(int j=0; j<6; j++){
            cin>>arr[i][j];
        }
    }
}

void display(int arr[4][6]){
    cout<<"Matrix is\n";
    for(int i=0; i<4; i++){
        for(int j=0; j<6; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}


void multi(int arr[4][6]){
    for(int i=0; i<4; i++){
        product=1;
        for(int j=0; j<6; j++){
            product=product*arr[i][j];
        }
        cout<<"product of elements of row "<<i+1<<" = "<<product<<endl;
    }
}

int main(){

    int arr[4][6];
    input(arr);
    display(arr);
    multi(arr);

    return 0;
}