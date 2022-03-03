#include <iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long arr[n];
    for (long long i = 0; i <n; i++)
    {
       cin>>arr[i];
    }

    long long length=0;
    long long maxLength = -1;
    for (long long i = 0; i < n; i++)
    {
        if(maxLength<length)
        maxLength = length;
        if(arr[i]<=arr[i+1])
        length++;
        else
        length = 0;
    }

    cout<<maxLength+1<<endl;
    
    
}