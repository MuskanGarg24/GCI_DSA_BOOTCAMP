/*

   1
  12A
 123AB
1234ABC

*/


#include<iostream>
using namespace std;

int main(){
    int i,j,x;
    char k;
    for(i=1; i<=4; i++){
        x=1;
        k='A';
        for(j=1; j<=7; j++){
            if(j>=5-i && j<=3+i){
                if(j<=4){
                    cout<<x;
                    x++;
                }
                else{
                    cout<<k;
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