/*You are given a string S that contains N characters. Your task is to determine the maximum possible size of the subsequence T of S such that no two adjacent characters in T are the same.*/

#include<iostream>
#include<string>
using namespace std;


int main(){

    int t;
    cin>>t;
    
    int n;
    string s;

    while(t--){
        int count=0;
        cin>>n;
        cin>>s;
        for(int i=0; i<n; i++){
            if(s[i]!=s[i+1]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}