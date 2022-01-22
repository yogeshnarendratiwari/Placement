// Team

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    while (n--)
    {
        int p, v, t;
        cin >> p >> v >> t;

        if (p + v + t >= 2 && (p == 1 || p == 0) && (v == 1 || v == 0) && (t == 1 || t == 0))
            ans++;
    }
    
    cout << ans << endl;
}