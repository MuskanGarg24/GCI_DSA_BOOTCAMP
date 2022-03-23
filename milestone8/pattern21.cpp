/*

    ****
   ****
  ****
 ****

*/


#include<iostream>
using namespace std;

int main(){
    int k=5;
    for(int i=1; i<=4; i++){
        k--;
        for(int j=1; j<=8; j++){
            if(j>=k+1 && j<=4+k){
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