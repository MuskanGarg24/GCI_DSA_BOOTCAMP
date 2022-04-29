#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int arr[n][m];

    int i,j,k,l;

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                k=i;
                l=j;
            }
        }
    }
    for(i=0; i<m; i++){
        arr[k][i]=1;
    }
    for(j=0;j<n;j++){
        arr[j][l]=1;
    }
    for(int i=0; i<n; i++){
        for(j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}