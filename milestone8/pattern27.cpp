/*

   1
  212
 32123
4321234

*/


#include<iostream>
using namespace std;

int main(){
    int i,j;
    int k;
    for(i=1; i<=4; i++){
        k=i;
        for(j=1; j<=7; j++){
            if(j>=5-i && j<=3+i){
                cout<<k;
                if(j<4){
                    k--;
                }
                else{
                    k++;
                }
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}