/*

*    *
 *  *
   *   
 *  *
*    *

*/


#include<iostream>
using namespace std;

int main(){
    int k=0;
    for(int i=1; i<=5; i++){
        if(i<=3){
            k++;
        }
        else{
            k--;
        }
        for(int j=1; j<=5; j++){
            if(j==k || j==6-k){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
        cout<<"\n";
    }
    return 0;
}