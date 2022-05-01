/*
Chandu is a bad student. Once his teacher asked him to print the reverse of a given string. He took three hours to solve it. The teacher got agitated at Chandu and asked you the same question. Can you solve it?
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(int i=s.length(); i>=0; i--){
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}