#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    // for each loop
    // for (int x : arr)
    // {
    //     cout << ++x << " ";
    // }
    // cout << endl;

    // for (int x : arr)
    // {
    //     cout << x << " ";
    // }
     // for each loop
    for (int& x : arr)
    {
        cout << ++x << " ";
    }
    cout << endl;

    for (auto x : arr)
    {
        cout << x << " ";
    }
}