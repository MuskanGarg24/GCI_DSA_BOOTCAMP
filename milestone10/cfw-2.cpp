#include<iostream>
using namespace std;

const int pi=3.14;

int diameter(int r){
    return 2*r;
}

int cirum(int r){
    return 2*pi*r;
}

int area(int r){
    return pi*r*r;
}

int main(){
    int r;
    cout<<"enter the radius: ";
    cin>>r;
    cout<<"Diameter of circle = "<<diameter(r)<<" units "<<endl;
    cout<<"Circumference of circle = "<<cirum(r)<<" units "<<endl;
    cout<<"Area of circle = "<<area(r)<<" sq units "<<endl;
    return 0;
}