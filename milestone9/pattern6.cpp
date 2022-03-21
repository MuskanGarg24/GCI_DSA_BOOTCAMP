/*

54321
5432
543
54
5

*/


#include<iostream>
using namespace std;

int main(){
    int i,j,k;
    for(i=1; i<=5; i++){
        k=5;
        for(j=1; j<=5; j++){
            if(j<=6-i){
                cout<<k;
                k--;
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}