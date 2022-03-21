/*

55555
4444
333
22
1

*/

#include<iostream>
using namespace std;

int main(){
    int i,j;
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            if(j<=6-i){
                cout<<6-i;
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}