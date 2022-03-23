/*

0
0 1
0 2 4
0 3 6 9
0 4 8 12 16

*/

#include<iostream>
using namespace std;


int main(){
    int i,j;
    int k;
    for(i=1; i<=5; i++){
        k=0;
        for(j=1; j<=5; j++){
            if(j<=i){
                cout<<k<<" ";
                k=k+(i-1);
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}