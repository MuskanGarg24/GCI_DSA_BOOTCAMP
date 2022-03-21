/*

1
01
101
0101

*/


#include<iostream>
using namespace std;
int main()
{
    int i, j;
    for(i=1; i<=4; i++)
    {
        for(j=i; j>=1; j--)
        {
            cout<<j%2;
        }
        cout<<"\n";
    }
    return 0;
}
