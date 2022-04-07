#include<iostream>
#include<math.h>
using namespace std;


int cube(int a){
    return pow(a,3);
}


int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num;
    cout<<"Cube of "<<num<<" is "<<cube(num);
    return 0;
}