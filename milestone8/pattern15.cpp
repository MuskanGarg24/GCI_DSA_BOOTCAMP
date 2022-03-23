/*
    1
   12
  123
 1234
12345
 1234
  123
   12
    1
*/

#include<iostream>
using namespace std;


int main(){
    int i,j,x;
    int k=6;
    for(i=1; i<=9; i++){
        x=1;
        if(i<=5){
            k--;
        }
        else{
            k++;
        }
        for(j=1; j<=5; j++){
            if(j>=k){
                cout<<x;
                x++;
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}