#include <iostream>
using namespace std;

int gcd(int a, int b)
{

    if (a <= 0)
    {
        return b;
    }
    else if (b <= 0)
    {
        return a;
    }

    if (a < b)
        gcd(b - a, a);
    else if (b < a)
        gcd(b, a - b);
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b);
}