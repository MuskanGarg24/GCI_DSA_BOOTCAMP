// If the input array is [10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60], 
// your program should be able to find that the subarray lies between the indexes 3 and 8.


#include<iostream>
using namespace std;

int main(){

    int arr[]={10,12,20,30,25,40,32,31,35,50,60};
    int subarray[4];

    int j=0;
    for(int i=4; i<8; i++){
        subarray[j]=arr[i];
        j++;
    } 

    for(int i=0; i<4; i++){
        cout<<subarray[i]<<" ";
    }
    return 0;
}