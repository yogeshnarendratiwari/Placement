#include<iostream>
#include <algorithm>
using namespace std;

void solve(int  arr[],int n,int k){
   for (int i = 0; i < n; i++)
   {
       if(k+i<n)
       swap(arr[i],arr[k+i]);
       else
       swap(arr[i],arr[n-1]);
   }
   
}

int main(){
int arr[] = {1,2,3,4,5};
solve(arr,5,2);
for (int i = 0; i <5 ; i++)
{
    cout<<arr[i]<<" ";
}

}