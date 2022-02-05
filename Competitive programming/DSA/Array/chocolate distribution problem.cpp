#include<iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int func(int arr[],int n,int m){
    if(m==0 || n==0 )return 0;
    if(m>n) return -1;
    int i=0;
    int j = i+m-1;
    int min = INT16_MAX;
    sort(arr,arr+n);
    while (j<n)
    {
      if(min>arr[j]-arr[i])
      min = arr[j]-arr[i];
      i++;
      j++;
    }
    return min;
}
int main(){
    int arr[8] = {3, 4, 1, 9, 56, 7, 9, 12};
    cout<<func(arr,8,5); 

}