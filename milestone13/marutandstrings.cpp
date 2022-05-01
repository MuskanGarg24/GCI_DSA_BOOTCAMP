#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    if(t>=1 && t<=10){
        while(t--){
            int upper=0, lower=0, spaces=0;
            string s;
            cin>>s;
            int l=s.size();
            for(int i=0; i<l; i++){
                if(s[i]>='A' && s[i]<='Z'){
                    upper++;
                }
                if(s[i]>='a' && s[i]<='z'){
                    lower++;
                }
                if(s[i]==' '){
                    spaces++;
                }
            }
            if((upper==0 && lower==0) || spaces>0){
                cout<<"Invalid Input"<<endl;
            }
            else if(upper<=lower){
                cout<<upper<<endl;
            }
            else{
                cout<<lower<<endl;
            }
        }
    }
    else{
        cout<<"Invalid Test";
    }
    return 0;
}