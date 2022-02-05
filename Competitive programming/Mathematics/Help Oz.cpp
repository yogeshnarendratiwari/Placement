#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long n;
    cin >> n ;
    long long arr[n];
    long long min = __LONG_LONG_MAX__;
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (min >= arr[i])
            min = arr[i];
    }

    long long arrNew[n];
    for (long long i = 0; i < n; i++)
    {
        arrNew[i] = arr[i];
    }

    for (long long k = 2; k <= min; k++)
    {
        for (long long i = 1; i <= n; i = 2*i)
        {
            arrNew[i-1] = arr[i-1] % k;
        }
        sort(arrNew, arrNew + n);
        if(arrNew[0]==arrNew[n-1] ||arrNew[0]==arrNew[n-2] ){
            cout << k<< " ";
        }
        arrNew[n] = arr[n];
    }
}