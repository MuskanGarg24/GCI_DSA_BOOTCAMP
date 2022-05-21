// Write a program to find a substring within a string. If found display its starting position


#include<iostream>
#include<string>
using namespace std;


int main(){
    int i,j;

    string s1;
    cout<<"enter string: ";
    getline(cin,s1);

    string s2;
    cout<<"enter substring: ";
    getline(cin,s2);

    int l=s2.size();

    for(i=0, j=0; i<s1.size()&&j<l; i++){
        if(s1[i]==s2[j]){
            j++;
        }
        else{
            j=0;
        }
    }

    if(j==l){
        cout<<"substring found at "<<i-j+1;
    }
    else{
        cout<<"string not found";
    }

    return 0;
}