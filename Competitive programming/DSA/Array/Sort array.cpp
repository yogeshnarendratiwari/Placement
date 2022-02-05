// sort an array of 0's 1's and 2's
#include <iostream>
#include <algorithm>
using namespace std;

void sort(int arr[], int n)
{
    int mid = 0;
    int low = 0;
    int high = n - 1;

    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low++], arr[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[high--]);
            break;
        }
    }
}

int main()
{
    int arr[5] = {0, 1, 0, 2, 1};
    sort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}