// Initialize and print all elements of a 2D array.

#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"enter the rows: ";
    cin>>n;

    int m;
    cout<<"enter the columns: ";
    cin>>m;

    int arr[n][m];

    cout<<"enter array elements\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"array: \n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}


