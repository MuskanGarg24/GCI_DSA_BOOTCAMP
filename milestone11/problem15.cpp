// Initialize a 2D array of 3*3 matrix. E.g.-
// 1	2	3
// 4	5	6
// 7	8	9

// Check if the matrix is symmetric or not.



#include<iostream>
using namespace std;


void setMatrix(int arr[3][3]){
    cout<<"enter elements\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
}

void getMatrix(int arr[3][3]){
    cout<<"Matrix\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void transpose(int arr[3][3], int trans[3][3]){
    cout<<"transpose\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            trans[i][j]=arr[j][i];
            cout<<trans[i][j]<<" ";
        }
        cout<<"\n";
    }
}


int main(){
    int sym=1;
    int arr[3][3];
    int trans[3][3];

    setMatrix(arr);
    getMatrix(arr);
    transpose(arr,trans);

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j]!=trans[i][j]){
                sym=0;
                break;
            }
        }
    }
    if(sym==1){
        cout<<"Matrix is symmetric";
    }
    else{
        cout<<"Matrix is not symmetric";
    }
    return 0;
}