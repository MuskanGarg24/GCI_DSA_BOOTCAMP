#include <bits/stdc++.h>

using namespace std;

string convert(string a)

{

    a = a.substr(1, a.length());

    return a;
}

int getResult(string a, string b, int n)

{

    for (int i = 0; i < n; i++){
        if (a.substr(0, a.length()) != b.substr(0, a.length())){
            a = convert(a);
        }
        else{
            break;
        }
    }
    return n - a.length();
}

int main()

{

    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    cout << getResult(a, b, n) << endl;

    return 0;
}