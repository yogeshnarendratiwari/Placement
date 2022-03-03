#include <iostream>
using namespace std;

class BruteForce
{
public:
    int func(int arr[], int n)
    {
        int water = 0;
        for (int i = 1; i < n - 1; i++)
        {
            int left = arr[0];
            for (int j = 0; j <= i; j++)
            {
                left = max(left, arr[i]);
            }

            int right = arr[n - 1];
            for (int j = n - 1 - i; j >= 0; j--)
            {
                right = max(right, arr[j]);
            }
            water += min(left, right) - arr[i];
        }
        return water;
    }
} BF;

class OptimalApproach
{
public:
    int bigOnSpace(int arr[], int n)
    {
        int water = 0;
        int left[n];
        left[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            left[i] = max(arr[i], left[i - 1]);
        }

        int right[n];
        right[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            right[i] = max(arr[i], right[i + 1]);
        }

        for (int i = 0; i < n; i++)
        {
            water += min(left[i], right[i]) - arr[i];
        }
        return water;
    }
    int constantSpace(int arr[], int n)
    {
        int water = 0;
        int leftMax = arr[0];
        int rightMax = arr[n - 1];
        int low = 0;
        int high = n - 1;
        while (low <= high)
        {
            if (arr[low] < arr[high])
            {
                if(arr[low]>leftMax)
                leftMax = arr[low];
                else
                water += leftMax - arr[low];
                low++;
            }
            else{
                if(arr[high]>rightMax)
                rightMax = arr[high];
                else
                water += rightMax-arr[high];
                high--;
            }
        }
        return water;
    }

} OA;

int main()
{
    int arr[8] = {3, 1, 2, 4, 0, 1, 3, 2};
    cout << BF.func(arr, 8);
    cout << OA.bigOnSpace(arr, 8);
    cout << OA.constantSpace(arr, 8);
}