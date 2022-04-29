// Write user defined functions for square matrix to calculate

// Left diagonal sum
// Right diagonal sum


#include<iostream>
using namespace std;

int sum;

void input(int arr[2][2]){
    cout<<"enter matrix elements\n";
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin>>arr[i][j];
        }
    }
}

void display(int arr[2][2]){
    cout<<"Matrix is\n";
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}


void LeftDiag(int arr[2][2]){
    sum=0;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            if(i==j){
                sum=sum+arr[i][j];
            }
        }
    }
    cout<<"sum of left diagonal = "<<sum<<endl;
}

void RightDiag(int arr[2][2]){
    sum=0;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            if(i!=j){
                sum=sum+arr[i][j];
            }
        }
    }
    cout<<"sum of right diagonal = "<<sum<<endl;
}

int main(){

    int arr[2][2];

    input(arr);
    display(arr);
    LeftDiag(arr);
    RightDiag(arr);

    return 0;
}
