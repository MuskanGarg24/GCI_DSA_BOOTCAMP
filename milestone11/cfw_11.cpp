// FREQUENCY OF EACH ELEMENT IN AN ARRAY

#include<iostream>
using namespace std;

int main(){

    int count=0;

    int n;
    cout<<"enter size: ";
    cin>>n;

    int arr[n];
    int freq[n];

    cout<<"enter array elements\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"array = ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    for(int i=0; i<n; i++){
        count=1;
        if(arr[i]!=-1){
            for(int j=i+1; j<n; j++){
                if(arr[i]==arr[j]){
                    count++;
                    arr[j]=-1;
                }
                freq[i]=count;
            }
        }
    }   

    for(int i=0; i<n; i++){
        if(arr[i]!=-1){
            cout<<"\nfrequency of "<<arr[i]<<" element is "<<freq[i];
        }
    }

    return 0;
}