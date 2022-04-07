#include<iostream>
using namespace std;


void eligible(int age){
    if(age>=18){
        cout<<"Eligible to vote";
    }
    else{
        cout<<"Not eligible to vote";
    }
}


int main(){
    int age;
    cout<<"enter age: ";
    cin>>age;
    eligible(age);
    return 0;   
}