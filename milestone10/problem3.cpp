#include<iostream>
using namespace std;


int circumference(int r){
    return 2*3.14*r;
}
int area(int r){
    return 3.14*r*r;
}

int main(){
    int r;
    cout<<"enter the radius: ";
    cin>>r;
    cout<<"circumference of circle = "<<circumference(r)<<endl;
    cout<<"Area of circle = "<<area(r)<<endl;
    return 0;
}