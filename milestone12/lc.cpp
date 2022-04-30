/*

input 
2 3 5
4 1 4
5 6 5

output -> 6

*/



#include<iostream>
using namespace std;

void sort(int arr[][20], int n, int m) {
	int i, j, k, l, temp;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            for(k=0;k<n;k++){
                for(l=0;l<m;l++){
                    if(arr[i][j]<arr[k][l]){
                        temp=arr[k][l];
                        arr[k][l]=arr[i][j];
                        arr[i][j]=temp;
                    }
                }
            }
        }
    }
}

int main()
{
	int n, m;
	int i, j;
	int arr[20][20];
	cin>>n>>m;
	for (i = 0; i < n; ++i) {
		for (j = 0; j < m; ++j) {
			cin>>arr[i][j];
		}
	}
	sort(arr, n, m);

    int count=1,ans=0;
    
    i=0;
    while(i<n){
        for(j=0;j<m-1;j++){
            if(arr[i][j+1]-arr[i][j]==1){
                count++;
            }
        }
        i++;
        if(arr[i][0]-arr[i-1][m-1]==1){
            count++;
        }
        ans = max(ans,count);
    }
    cout<<ans;
    return 0;
}