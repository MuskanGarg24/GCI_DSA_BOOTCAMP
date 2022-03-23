/*
        A
      C B
    F E D 
  J I H G 
O N M L K

*/

#include<iostream>
using namespace std;

int main(){
    int i,j;
    char k;
    for(i=1; i<=5; i++){
        k=64+((2*i)-1);
        for(j=1; j<=5; j++){
            if(j>=6-i){
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