#include<iostream>
using namespace std;

const int n=2;
const int m=2;

void Setarray(int arr[n][m]){
    cout<<"enter array elements: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
}

void Getarray(int arr[n][m]){
    cout<<"array is\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" " ;
        }
        cout<<endl;
    }
}


int main(){
    int arr[n][m];

    Setarray(arr);
    Getarray(arr);

    return 0;
}