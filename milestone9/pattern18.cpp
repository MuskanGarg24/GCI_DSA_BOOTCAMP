/*
13579
3579
579
79
9
*/

#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=9;i+=2){
        for(j=i;j<=9;j+=2){
            cout<<j;
        }
        cout<<"\n";
    }
  return 0;
}