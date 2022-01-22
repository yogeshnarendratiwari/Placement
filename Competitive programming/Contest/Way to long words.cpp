// Way to long words

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string word;
        cin >> word;
        bool CanCode = false;
        for (int i = 0; i < word.length() - 1; i++)
        {
            if (word[i] >= 97 && word[i] <= 122 && word.length() > 10)
                CanCode = true;
        }
       
        CanCode ? cout<<word[0]+to_string(word.length()-2)+word[word.length()-1]<<endl : cout<<word<<endl;
    }
}