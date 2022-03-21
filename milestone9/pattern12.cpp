/*

12345
4321
123
21
1

*/


#include<iostream>
using namespace std;

int main(){
    int i,j,k;
    for(i=1; i<=5; i++){
        if(i%2!=0){
            k=1;
        }
        else{
            k=6-i;
        }
        for(j=1; j<=5; j++){
            if(j<=6-i){
                if(i%2!=0){
                    cout<<k;
                    k++;
                }
                else{
                    cout<<k;
                    k--;
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