#include<iostream>
using namespace std;

int main(){
    int salary;
    int Years;
    cout<<"Enter your salary: ";
    cin>>salary;
    cout<<"Enter your years of service: ";
    cin>>Years;
    if(Years>5){
        cout<<"Net amount = "<<(salary+(0.05*salary));
    }
    else{
        cout<<"Net amount = "<<salary;
    }
    return 0;
}