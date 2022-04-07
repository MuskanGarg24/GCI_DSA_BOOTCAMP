#include<iostream>
using namespace std;


int table(int n){
    for(int i=1; i<=10; i++){
        cout<<n*i<<endl;
    }
}

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    cout<<"Multiplication table of "<<n<<endl;
    table(n);
    return 0;
}