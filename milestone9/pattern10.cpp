/*

5
44
333
2222
11111

*/

#include<iostream>
using namespace std;

int main(){
    int i,j;
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            if(j<=i){
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