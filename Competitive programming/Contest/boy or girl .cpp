// Boy or girl

#include <iostream>
#include <set>
using namespace std;
int main()
{
    string s;
    cin >> s;

    if (s.length() > 0 && s.length() < 100)
    {
        bool canCode = true;

        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] < 97 || s[i] > 122)
                canCode = false;
        }

        if (canCode)
        {

            set<char> ans;
            for (int i = 0; i < s.length(); i++)
            {
                ans.insert(s[i]);
            }

            if (ans.size() % 2 == 0)
                cout << "CHAT WITH HER!" << endl;
            else
                cout << "IGNORE HIM!" << endl;
        }
    }
}