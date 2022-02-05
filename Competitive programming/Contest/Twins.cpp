
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        total = total + arr[i];
    }
    sort(arr, arr + n, greater<int>());
    int count = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int rem = total - sum;
        if (sum > rem)
            break;
        sum = sum + arr[i];
        count++;
    }

    cout << count << endl;
}