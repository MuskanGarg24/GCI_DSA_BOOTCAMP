#include<iostream>
using namespace std;


int max(int a, int b, int c){
    if(a>b){
        if(a>c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        return b;
    }
}

int min(int a, int b, int c){
    if(a<b){
        if(a<c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        return b;
    }
}


int main(){
    int a,b,c;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    cout<<"enter c: ";
    cin>>c;
    cout<<"Maximum among three numbers is "<<max(a,b,c)<<endl;
    cout<<"Minimum among three numbers is "<<min(a,b,c)<<endl;
    return 0;
}