#include<iostream>
using namespace std;

void checkNum(int n){
    if(n%2==0){
        cout<<n<<" is even ";
    }
    else{
        cout<<n<<" is odd ";
    }
}



int main(){
    int num;
    cout<<"enter num: ";
    cin>>num;
    checkNum(num);
    return 0;
}