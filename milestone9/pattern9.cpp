/*

1
22
333
4444
55555

*/

#include<iostream>
using namespace std;

int main(){
    int i,j;
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            if(j<=i){
                cout<<i;
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}