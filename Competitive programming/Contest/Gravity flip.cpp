#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ptr1 = 0;
    int ptr2 = n - 1;
    sort(arr,arr+n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}