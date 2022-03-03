#include<iostream>
#include <algorithm>
using namespace std;


int UsingMax(int arr[],int n){
    int max = INT16_MIN;
    for (int i = 0; i <n; i++)
    {
        if(max<arr[i])
        max = arr[i];
    }
    return max;
}

int UsingSort(int arr[],int n){
   sort(arr,arr+n);
   return arr[n-1];
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    cout<<UsingMax(arr,n)<<endl;    
    cout<<UsingSort(arr,n);
}