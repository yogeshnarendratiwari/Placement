// word

#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;

    if (s.length()>=1 && s.length() <= 100)
    {
        
        bool canCode = true;
        int capital = 0, small = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] < 65 || s[i] > 122 || s[i] > 90 && s[i] < 97)
            {
                canCode = false;
                break;
            }

            if (s[i] >= 65 && s[i] <= 90)
                capital++;
            else if (s[i] >= 97 && s[i] <= 122)
                small++;
        }
           

        if (canCode)
        {

            if (capital > small)
            {
                for (int i = 0; i < s.length(); i++)
                {
                    if(s[i]>=97 && s[i]<=122)
                    s[i] = s[i]-32;
                }
            }
           else if (capital <= small)
            {
                for (int i = 0; i < s.length(); i++)
                {
                    if(s[i]>=65 && s[i]<=90)
                    s[i] = s[i]+32;
                }
            }
            cout<<s<<endl;
            
        }
   
    }
}