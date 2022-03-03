// Vanya and fence

#include <iostream>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a > h)
            ans = ans + 2;
        else
            ans = ans + 1;
    }

    cout << ans << endl;
}