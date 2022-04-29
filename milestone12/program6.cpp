// Write a program to add two array A and B of size m x n.

#include<iostream>
using namespace std;


int main(){

    int i,j;

    int n,m;
    cout<<"enter row and col of matrix 1 : ";
    cin>>n>>m;

    int p,q;
    cout<<"enter row and col of matrix 2 : ";
    cin>>p>>q;

    int arr1[n][m];
    int arr2[p][q];
    int sum[n][m];

    if(n==p && m==q){
        cout<<"enter matrix 1 elements\n";
        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                cin>>arr1[i][j];
            }
        }
        cout<<"matrix 1\n";
        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                cout<<arr1[i][j]<<" ";
            }
            cout<<"\n";
        }

        cout<<"enter matrix 2 elements\n";
        for(i=0; i<p; i++){
            for(j=0; j<q; j++){
                cin>>arr2[i][j];
            }
        }
        cout<<"matrix 2\n";
        for(i=0; i<p; i++){
            for(j=0; j<q; j++){
                cout<<arr2[i][j]<<" ";
            }
            cout<<"\n";
        }

        cout<<"sum of two matrices\n";
        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                sum[i][j]=arr1[i][j]+arr2[i][j];
            }
        }
        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                cout<<sum[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    else{
        cout<<"operation is not possible\n";
    }

    return 0;
}