#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    char arr[n][m];
    char x='X';
    
    int i,j,k=0,l=0;
    int last_row = n-1;
    int last_col = m-1;

    while(k<last_row && l<last_col){
        for(i=l; i<=last_col; i++){
            arr[k][i]=x;
        }
        k++;
        for(i=k; i<=last_row; i++){
            arr[i][last_col]=x;
        }
        last_col--;
        if(k<=last_row){
            for(i=last_col; i>=l; i--){
                arr[last_row][i]=x;
            }
        }
        last_row--;
        if(l<=last_col){
            for(i=last_row; i>=k; i--){
                arr[i][l]=x;
            }
        }
        l++;
        x=(x=='O')?'X':'O';
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}