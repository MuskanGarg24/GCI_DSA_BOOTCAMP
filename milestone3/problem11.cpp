#include<iostream>
using namespace std;


int main(){
    int num;
    cout<<"enter number: ";
    cin>>num;
    int last=num%10;
    cout<<"last term = "<<last<<endl;
    
    int first;
    while(num>10){
        num=num/10;
        first=num;
    }
    cout<<"first digit = "<<first;
    
    return 0;
}