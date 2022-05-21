/*
Everybody loves palindromes, but Artur doesn't.
He has a string S that consists of lowercase English letters ('a' - 'z'). Artur wants to find a substring T of S of the maximal length, so that T isn't a palindrome.
*/

#include<bits/stdc++.h>
using namespace std;


int main(){
    int check=1;
    string s;
    cin>>s;
    int l=s.length();
    for(int i=0; i<l/2; i++){
        if(s[i]!=s[l-i-1]){
            check=0;
            break;
        }
    }
    if(check==0){
        cout<<l;
    }
    else{
        if(count(s.begin(),s.end(),s[0])==s.length()){
            cout<<0;
        }
        else{
            cout<<l-1;
        }
    }
    return 0;
}