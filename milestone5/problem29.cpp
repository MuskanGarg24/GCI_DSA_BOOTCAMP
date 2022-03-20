// prime factors of a number

#include <iostream>
using namespace std;

int main()
{
    int prime;
    int i;
    int num;
    cout << "enter num: ";
    cin >> num;
    cout<<"prime factors: ";
    for (i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            prime = 1;
            for (int j = 2; j <= i/2; j++)
            {
                if (i % j == 0)
                {
                    prime = 0;
                    break;
                }
            }
            if (prime == 1)
            {
                cout << i << " ";
            }
        }
    }
    return 0;
}