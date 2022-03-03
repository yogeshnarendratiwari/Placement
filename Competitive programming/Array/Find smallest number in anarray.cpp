#include<iostream>
#include <algorithm>
using namespace std;


int UsingMin(int arr[],int n){
    int min = INT16_MAX;
    for (int i = 0; i <n; i++)
    {
        if(min>arr[i])
        min = arr[i];
    }
    return min;
}

int UsingSort(int arr[],int n){
   sort(arr,arr+n);
   return arr[0];
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    cout<<UsingMin(arr,n)<<endl;    
    cout<<UsingSort(arr,n);
}