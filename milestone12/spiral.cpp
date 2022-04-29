// reducing rows and columns after traversing

#include<iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    int i,j,k=0,l=0;
    int last_row = n-1;
    int last_col = m-1;

    int arr[n][m];

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    while(k<last_row && l<last_col){
        for(i=l; i<=last_col; i++){
            cout<<arr[k][i]<<" ";
        }
        k++;
        for(i=k; i<=last_row; i++){
            cout<<arr[i][last_col]<<" ";
        }
        last_col--;
        if(k<=last_row){
            for(i=last_col; i>=l; i--){
                cout<<arr[last_row][i]<<" ";
            }
        }
        last_row--;
        if(l<=last_col){
            for(i=last_row; i>=k; i--){
                cout<<arr[i][l]<<" ";
            }
        }
        l++;
    }
    return 0;
}