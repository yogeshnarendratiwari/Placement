#include <iostream>
#include <map>
using namespace std;

void monthName(int m)
{
    switch (m)
    {
    case 0:
        cout << "January" << endl;
        break;
    case 1:
        cout << "February" << endl;
        break;
    case 2:
        cout << "March" << endl;
        break;
    case 3:
        cout << "April" << endl;
        break;
    case 4:
        cout << "May" << endl;
        break;
    case 5:
        cout << "June" << endl;
        break;
    case 6:
        cout << "July" << endl;
        break;
    case 7:
        cout << "August" << endl;
        break;
    case 8:
        cout << "September" << endl;
        break;
    case 9:
        cout << "October" << endl;
        break;
    case 10:
        cout << "November" << endl;
        break;
    case 11:
        cout << "December" << endl;
        break;
    }
}

void monthInitializer(string Month[])
{

    Month[0] = "January";
    Month[1] = "February";
    Month[2] = "March";
    Month[3] = "April";
    Month[4] = "May";
    Month[5] = "June";
    Month[6] = "July";
    Month[7] = "August";
    Month[8] = "September";
    Month[9] = "October";
    Month[10] = "November";
    Month[11] = "December";
}

int main()
{
    string currentMonth;
    int k;
    cin >> currentMonth;
    cin >> k;

    string month[12];
    monthInitializer(month);

    map<string, int> m;
    for (int i = 0; i < 12; i++)
    {
        m[month[i]] = i;
    }
    int currentMonthNumber = m[currentMonth];
    for (int i = 0; i < k; i++)
    {
        currentMonthNumber = currentMonthNumber + 1;
        if(currentMonthNumber>11)
        currentMonthNumber = 0;
    }

  monthName(currentMonthNumber);
    
}