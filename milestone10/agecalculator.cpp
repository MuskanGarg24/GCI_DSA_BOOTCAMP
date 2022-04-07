#include<iostream>
using namespace std;


int main(){
    int d1,m1,y1;
    int d2,m2,y2;

    cout<<"birth year: ";
    cin>>y1;
    cout<<"birth month: ";
    cin>>m1;
    cout<<"birth date: ";
    cin>>d1;

    cout<<"current year: ";
    cin>>y2;
    cout<<"current month: ";
    cin>>m2;
    cout<<"current date: ";
    cin>>d2;

    int year, month, date;
    year=y2-y1;
    if(m1<=m2){
        month=m2-m1;
    }
    else if(m1>m2){
        year=year-1;
        m2=12+m2;
        month=m2-m1;
    }
    if(d1<=d2){
        date=d2-d1;
    }
    else if(d1>d2){
        month=month-1;
        d2=30+d2;
        date=d2-d1;
    }
    cout<<"age is "<<year<<" years "<<month<<" months "<<date<<" days ";
    return 0;
}