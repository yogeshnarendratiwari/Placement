#include<iostream>
using namespace std;

void func(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == n)
        cout<<arr[0]<<" ";
        else 
        cout<<arr[arr[i]]<<" ";
    }
    
}


int main(){
  int n;
  cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
      cin>>arr[i];
  }
  func(arr,n);
}