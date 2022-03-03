#include<iostream>
#include <algorithm>
using namespace std;

void rearrange(int arr[],int n){
    
    sort(arr,arr+n);
    int mid;
    if(n%2==0)
    mid = n/2;
    else
    mid = n/2+1;

    for (int i = 0; i < mid; i++)
    {
        cout<<arr[i]<<" ";

    }
    for (int i = n-1; i >= mid; i--)
    {
        cout<<arr[i]<<" ";
    }
    


    
}


int main(){
int arr[6] = {8,7,1,6,5,9};
rearrange(arr,6);
}