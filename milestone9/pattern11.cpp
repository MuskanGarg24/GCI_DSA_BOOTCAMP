/*

1234567
12345
123
1

*/

#include<iostream>
using namespace std;

int main(){
    int i,j,k;
    for(i=1; i<=4; i++){
        k=1;
        for(j=1; j<=7; j++){
            if(j<=9-(2*i)){
                cout<<k;
                k++;
            }
            else{
                cout<<" ";                
            }
        }
        cout<<"\n";
    }
    return 0;
}