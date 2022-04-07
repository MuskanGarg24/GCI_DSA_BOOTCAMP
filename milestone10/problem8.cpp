/*

Marks        Grade
91-100         AA
81-90          AB
71-80          BB
61-70          BC
51-60          CD
41-50          DD
<=40          Fail

*/




#include<iostream>
using namespace std;


void grade(int marks){
    if(marks>=91 && marks<=100){
        cout<<"AA";
    }
    else if(marks>=81 && marks<=90){
        cout<<"AB";
    }
    else if(marks>=71 && marks<=80){
        cout<<"BB";
    }
    else if(marks>=61 && marks<=70){
        cout<<"BC";
    }
    else if(marks>=51 && marks<=60){
        cout<<"CD";
    }
    else if(marks>=41 && marks<=50){
        cout<<"DD";
    }
    else{
        cout<<"Fail";
    }
}


int main(){
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;
    grade(marks);
    return 0;
}