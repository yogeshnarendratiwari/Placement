// Queue at the school

#include <iostream>
using namespace std;

void swap(char &a, char &b)
{
    char temp;
    temp = a;
    a = b;
    b = temp;
}

void arrangement(string &s)
{
    int i = 0;
    while (i < s.length())
    {
        if (s[i] == 'B' && s[i + 1] == 'G')
        {
            swap(s[i], s[i + 1]);
            i = i + 2;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int n, t;
    cin >> n >> t;

    if (n >= 1 && n <= 50 && t >= 1 && t <= 50)
    {
        string arr;
        cin >> arr;
        if (arr.length() == n)
        {
            while (t--)
            {
                arrangement(arr);
            }
        }

        cout << arr << endl;
    }
}