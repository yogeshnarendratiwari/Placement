// Helpful maths

#include <iostream>
using namespace std;

void Swap(char &x, char &y)
{
    char temp;
    temp = x;
    x = y;
    y = temp;
}

void answer(string Sum)
{
    int low = 0;
    int high = Sum.length() - 1;
    int mid = 0;

    while (mid <= high)
    {
        switch (Sum[mid])
        {
        case '1':
            Swap(Sum[low++], Sum[mid++]);
            break;
        case '2':
            mid++;
            break;
        case '3':
            Swap(Sum[mid], Sum[high--]);
            break;
        }
    }

    string ans = "";

    for (int i = 0; i < Sum.length() - 1; i++)
    {
        ans = ans + Sum[i] + "+";
    }

    ans = ans + Sum[Sum.length() - 1];
    cout << ans;
}

int main()
{

    string sum;
    cin >> sum;

    string Sum = "";
    for (int i = 0; i < sum.length(); i++)
    {
        if (sum[i] != '+')
            Sum = Sum + sum[i];
    }

    bool canCode = true;

    if (sum.length() <= 100 && sum.length() > 0)
    {
        for (int i = 0; i < sum.length(); i++)
        {
            if (sum[i] != '1' && sum[i] != '2' && sum[i] != '3' && sum[i] != '+' && sum[i]==' ')
            {
                canCode = false;
                break;
            }
        }
    }
   

    if(canCode){
        answer(Sum);
    }
    return 0;
}