#include<iostream>
using namespace std;

int main()
{
    char Marital;
    cout<<"Enter your Marital Status (Y/N): ";
    cin>>Marital;

    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age>=20 && age<=60)
    {
        char sex;
        cout<<"Enter your sex (F/M): ";
        cin>>sex;

        if(sex=='F')
        {
            cout<<"You will work in urban areas";
        }
        else
        {
            if(age>=20 && age<=40)
            {
                cout<<"You can work anywhere";
            }
            else
            {
                cout<<"You will work in urban areas";
            }
        }
    }
    else
    {
        cout<<"ERROR";
    }

    return 0;
}