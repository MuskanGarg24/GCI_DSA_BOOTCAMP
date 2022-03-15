#include<iostream>
using namespace std;

int main(){
    int age1, age2, age3;
    cout<<"Enter the age of first person: ";
    cin>>age1;
    cout<<"Enter the age of second person: ";
    cin>>age2;
    cout<<"Enter the age of third perosn: ";
    cin>>age3;
    if(age1>age3){
        if(age1>age2){
            cout<<"Person 1 is oldest";
        }
        else{
            cout<<"Person 2 is oldest";
        }
    }
    else{
        cout<<"Person 3 is oldest";
    }
    return 0;
}