// program to count total numbers of even and odd elements in an array



#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int even=0, odd=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"total even numbers = "<<even<<endl;
    cout<<"total odd numbers = "<<odd;
    return 0;
}