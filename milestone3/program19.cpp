#include<iostream>
using namespace std;


int main(){
    int num;
    cout<<"enter num: ";
    cin>>num;
    int rem, rev=0;
    while(num!=0){
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    while (rev!=0)
    {
        switch (rev%10)
        {
        case 9:
            cout<<"nine"<<" ";
            break;
        case 8:
            cout<<"eight"<<" ";
            break;
        case 7:
            cout<<"seven"<<" ";
            break;
        case 6:
            cout<<"six"<<" ";
            break;
        case 5:
            cout<<"five"<<" ";
            break;
        case 4:
            cout<<"four"<<" ";
            break;
        case 3:
            cout<<"three"<<" ";
            break;
        case 2:
            cout<<"two"<<" ";
            break;
        case 1:
            cout<<"one"<<" ";
            break;
        case 0:
            cout<<"zero"<<" ";
            break;
        default:
            cout<<"invalid input";
            break;
        }
        rev=rev/10;
    }
    
    return 0;
}