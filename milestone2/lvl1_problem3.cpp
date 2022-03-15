#include<iostream>
using namespace std;

int main(){
    int quantity;
    cout<<"Enter the quantity of items taken: ";
    cin>>quantity;
    if(quantity>1000){
        cout<<"Cost = "<<(quantity*100)*0.1;
    }
    else{
        cout<<"Cost = "<<(quantity*100);
    }
    return 0;
}