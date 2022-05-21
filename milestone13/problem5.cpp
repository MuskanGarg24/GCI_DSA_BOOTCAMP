// Write a program to compare two strings they are exact equal or not

#include<iostream>
#include<string>
using namespace std;

int main(){

    int i,j;
    bool check=1;

    string s1;
    cout<<"enter string 1: ";
    cin>>s1;

    string s2;
    cout<<"enter string 2: ";
    cin>>s2;

    int l1=s1.size();
    int l2=s2.size();

    for(i=0,j=0; i<l1, j<l2; i++,j++){
        if(s1[i]!=s2[j]){
            check=0;
            break;
        }
    }
    if(check==1){
        cout<<"strings are equal"<<endl;
    }
    else{
        cout<<"strings are not equal"<<endl;
    }
    return 0;
}