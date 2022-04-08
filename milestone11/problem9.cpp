// Take an array of 10 elements. Split it into middle and store the elements in two dfferent arrays. E.g.-
// INITIAL array :
// 58	24	13	15	63	9	8	81	1	78

// After spliting :
// 58	24	13	15	63
// 9	8	81	1	78


#include<iostream>
using namespace std;


int main(){
    int arr[10]={58,24,13,15,63,9,8,81,1,78};
    int arr1[5];
    int arr2[5];

    for(int i=0; i<5; i++){
        arr1[i]=arr[i];
    }
    for(int i=0; i<5; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=5; i<10; i++){
        arr2[i-5]=arr[i];
    }
    for(int i=0; i<5; i++){
        cout<<arr2[i]<<" ";
    }

    return 0;
}