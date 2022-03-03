#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int zero = 0;
    int one = 0;
    bool ans = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0' && s[i + 1] == '0')
        {
            zero++;
            if (zero >= 6)
            {
                ans = true;
                break;
            }
            
        }

        else
            zero = 0;

        if (s[i] == '1' && s[i + 1] == '1')
        {
            one++;
            if (one >= 6)
            {
                ans = true;
                break;
            }
        }

        else
            one = 0;
    }

    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}