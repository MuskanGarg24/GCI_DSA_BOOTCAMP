// Write a menu driven C++ program to do following operation on two dimensional array A of size m x n. You should use user-defined functions which accept 2-D array A, and its size m and n as arguments. The options are:

// To input elements into matrix of size m x n
// To display elements of matrix of size m x n
// Sum of all elements of matrix of size m x n
// To display row-wise sum of matrix of size m x n
// To display column-wise sum of matrix of size m x n
// To create transpose of matrix B of size n x m


#include<iostream>
using namespace std;

int sum,i,j;

void input(int m, int n){
    int arr[m][n];
    cout<<"enter matrix elements\n";
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
}

void display(int m, int n){
    int arr[m][n];
    cout<<"Matrix is\n";
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void SUM(int m, int n){
    int arr[m][n];
    sum=0;
    for(i=0;i<m; i++){
        for(j=0; j<n; j++){
            sum=sum+arr[i][j];
        }
    }
    cout<<"sum = "<<sum;
}

void Row(int m, int n){
    int arr[m][n];
    for(i=0; i<m; i++){
        sum=0;
        for(j=0; j<n; j++){
            sum=sum+arr[i][j];
        }
        cout<<"sum of row "<<i+1<<" = "<<sum<<endl;
    }
}

void Col(int m, int n){
    int arr[m][n];
    for(i=0; i<m; i++){
        sum=0;
        for(j=0; j<m; j++){
            sum=sum+arr[j][i];
        }
        cout<<"sum of column "<<i+1<<" = "<<sum<<endl;
    }
}


void transpose(int m,int n){
    int arr[m][n];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<"\n";
    }
}


int main(){
    int m,n;
    cout<<"enter rows and columns: ";
    cin>>m>>n;

    int arr[m][n];

    cout<<"***** MENU *****"<<endl;
    cout<<" 1) - Input the elements of matrix "<<endl;
    cout<<" 2) - Display the elements of matrix "<<endl;
    cout<<" 3) - Sum of all elements of matrix "<<endl;
    cout<<" 4) - Row wise sum of matrix "<<endl;
    cout<<" 5) - Column wise sum of matrix "<<endl;
    cout<<" 6) - Transpose of matrix "<<endl;

    int option;
    cout<<"enter option: ";
    cin>>option;

    if(option==1){
        input(m,n);
    }
    else if(option==2){
        input(m,n);
        display(m,n);
    }
    else if(option==3){
        input(m,n);
        SUM(m,n);
    }
    else if(option==4){
        input(m,n);
        Row(m,n);
    }
    else if(option==5){
        input(m,n);
        Col(m,n);   
    }
    else if(option==6){
        input(m,n);
        transpose(m,n);
    }
    else{
        cout<<"invalid input";
    }

    return 0;
}