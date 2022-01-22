// Ultra-Fast Mathematician

#include <iostream>
using namespace std;
int main()
{
    string num1 ,num2;
    cin>>num1;
    cin>>num2;
    string ans = "";

    if (num1.length() == num2.length() && num1.length() <= 100 && num1.length() > 0)
    {
        for (int i = 0; i < num1.length(); i++)
        {
            if(num1[i]!=num2[i])
            ans =ans + "1";
            else
            ans =ans + "0";
        }
        cout<<ans<<endl;
    }
}