
// power of a number using loop

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"enter num: ";
    cin>>num;
    int power;
    cout<<"enter power: ";
    cin>>power;
    int ans=1;

    for(int i=1; i<=power; i++){
        ans=ans*num;
    }
    cout<<num<<" raised to the power "<<power<<" is "<<ans;

    return 0;
}