
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;
    while (start <= end)
    {
        if (s[start] != s[end])
            return false;
        start++;
        end--;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i].length() == 1)
            {
                cout << "YES" << endl;
                return 0;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (isPalindrome(arr[i]))
            {
                cout << "YES" << endl;
                return 0;
            }
        }

        string test = "";
        bool answer = false;
        for (int i = 0; i < n; i++)
        {
            test = arr[i];
            for (int j = i + 1; j < n; j++)
            {
                test = test + arr[j];
                if (isPalindrome(test))
                {
                    answer = true;
                    break;
                }
                test = arr[i];
            }
        }
        if (answer)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
}