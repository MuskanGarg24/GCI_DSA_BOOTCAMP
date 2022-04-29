// Write a program to multiply array A and B of order NxL and LxM


#include<iostream>
using namespace std;

int main(){

    int i,j;
    int sum;
    int n,l,m;
    cout<<"enter rows of matrix 1: "<<endl;
    cin>>n;
    cout<<"enter column of matrix 1: "<<endl;
    cin>>l;
    cout<<"enter column of matrix 2: "<<endl;
    cin>>m;


    int A[n][l];
    int B[l][m];

    cout<<"enter elements of matrix 1\n";
    for(i=0; i<n; i++){
        for(j=0; j<l; j++){
            cin>>A[i][j];
        }
    }
    cout<<"matrix 1\n";
    for(i=0; i<n; i++){
        for(j=0; j<l; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"enter elements of matrix 2\n";
    for(i=0; i<l; i++){
        for(j=0; j<m; j++){
            cin>>B[i][j];
        }
    }
    cout<<"matrix 2\n";
    for(i=0; i<l; i++){
        for(j=0; j<m; j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    int multi[n][m];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            sum=0;
            for(int k=0; k<m; k++){
                sum=sum+(A[i][k]*B[k][j]);
            }
            multi[i][j]=sum;
        }
    }
    cout<<"multiplication\n";
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cout<<multi[i][j]<<" ";
        }
        cout<<endl;
    }
}