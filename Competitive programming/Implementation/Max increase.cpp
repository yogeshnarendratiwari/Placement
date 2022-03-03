#include<iostream>
using namespace std;

long long maxInc(long long arr[],long long n){
    if(n==1)
    return 1;
    long long length = 0;
    long long max = INT64_MIN;
    for (long long i = 0; i < n-1; i++)
    {
        if(arr[i]<arr[i+1])
        length++;
        else
        length=0;
        if(max<length)
        max= length;
    }
    return max+1;
}


int main(){
   long long n;
   cin>>n;
   long long arr[n];
   for (long long i = 0; i < n; i++)
   {
       cin>>arr[i];
   }
   cout<<maxInc(arr,n)<<endl;
   
}