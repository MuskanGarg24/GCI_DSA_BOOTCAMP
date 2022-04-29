#include<iostream>
using namespace std;


int main(){
    int i,j,k;

    int n,m;
    cin>>n>>m;

    int matrix[n][m];

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin>>matrix[i][j];
        }
    }

    for(i=0; i<n+m-1; i++){
        for(j=0; j<n; j++){
            for(k=0; k<m; k++){
                if(j+k==i){
                    cout<<matrix[k][j]<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}