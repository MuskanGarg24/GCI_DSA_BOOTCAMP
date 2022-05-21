// // binary swap

#include <iostream>
using namespace std;

int main()
{

    string a, b;
    cin >> a >> b;

    int count = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
            count++;
    }
    if (count % 2 != 0)

        cout << "-1";

    else
    {
        cout << count / 2;
    }

    return 0;
}