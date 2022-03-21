/*

55555
45555
34555
23455
12345

*/

#include<iostream>
using namespace std;

int main(){
    int i,j,k;
    for(i=1; i<=5; i++){
        k=6-i;
        for(j=1; j<=5; j++){
            if(j<=i){
                cout<<k;
                k++;
            }
            else{
                cout<<5;
            }
        }
        cout<<"\n";
    }
    return 0;
}