/*

1
24
135
2468
13579

*/

#include<iostream>
using namespace std;

int main(){
    int i,j,k;
    for(i=1; i<=5; i++){
        if(i%2==0){
            k=2;
        }
        else{
            k=1;
        }
        for(j=1; j<=5; j++, k+=2){
            if(j<=i){
                cout<<k;
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}