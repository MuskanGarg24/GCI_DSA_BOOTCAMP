#include<iostream>
using namespace std;

int main(){
    int Held;
    cout<<"Number of classes held: ";
    cin>>Held;
    int attended;
    cout<<"Number of classes attended: ";
    cin>>attended;
    int attendance;
    attendance= ((attended*100)/Held);
    cout<<"Your attendance is "<<attendance<<endl;
    if(attendance>=75){
        cout<<"You can sit in exam";
    }
    else{
        cout<<"You cannot sit in exam";
    }
    return 0;
}