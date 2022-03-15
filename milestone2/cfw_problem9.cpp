#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number whose table you want to display: ";
    cin>>n;
    int i=1;
    while(i<=10){
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
        i++;
    }
    return 0;
}