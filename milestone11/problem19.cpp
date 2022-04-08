#include<iostream>
using namespace std;


void matrix1(int m1[3][3]){
    cout<<"enter matrix 1 element\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>m1[i][j];
        }
    }
}

void matrix2(int m2[3][3]){
    cout<<"enter matrix 2 element\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>m2[i][j];
        }
    }
}


int main(){

    int sum;
    int m1[3][3];
    int m2[3][3];

    matrix1(m1);
    matrix2(m2);

    int sumMatrix[3][3];

    cout<<"sum is\n";

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sumMatrix[i][j]=m1[i][j]+m2[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<sumMatrix[i][j]<<" ";
        }
        cout<<"\n";
    }

    int multi[3][3];
    cout<<"multiplication is\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum=0;
            for(int k=0; k<3; k++){
                sum=sum+(m1[i][k]*m2[k][j]);
            }
            multi[i][j]=sum;
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<multi[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}