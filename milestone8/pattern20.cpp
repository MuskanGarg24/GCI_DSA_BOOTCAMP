/*
   A1
  AB12
 ABC123
ABCD1234

*/

#include<iostream>
using namespace std;


int main(){
    int i,j,x;
    char k;
    for(i=1; i<=4; i++){
        k='A';
        x=1;
        for(j=1; j<=8; j++){
            if(j>=5-i && j<=4+i){
                if(j<=4){
                    cout<<k;
                    k++;
                }
                else{
                   cout<<x;
                   x++;
                }
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}