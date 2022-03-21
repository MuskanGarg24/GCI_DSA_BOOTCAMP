/*

54321
4321
321
21
1

*/


#include<iostream>
using namespace std;

int main(){
    int i,j,k;
    for(i=1; i<=5; i++){
        k=6-i;
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