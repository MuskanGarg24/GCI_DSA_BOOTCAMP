/*

1
10
101
1010
10101
101010

*/


#include<iostream>
using namespace std;

int main(){
    int i,j,k;
    for(i=1; i<=6; i++){
        k=1;
        for(j=1; j<=6; j++){
            if(j<=i){
                cout<<k;
                k=1-k;
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}