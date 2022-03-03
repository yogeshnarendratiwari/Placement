// word capitilization

#include <iostream>
using namespace std;
int main()
{
    string word;
    cin >> word;
    bool canCode = false;
    if (word.length() > 0 && word.length() < 1000)
    {
        for (int i = 0; i < word.length(); i++)
        {
            if ((word[i] >= 65 && word[i] <= 90) || (word[i] >= 97 && word[i] <= 122))
                canCode = true;
            else
            {
                canCode = false;
                break;
            }
        }
    }


    if(canCode){
        if(word[0]>=97 && word[0]<=122)
        word[0] = word[0] - 32;
    }

    cout<<word<<endl;
}