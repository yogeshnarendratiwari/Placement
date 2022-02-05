// Finding duplicates

#include <iostream>
#include <cstring>
#include <map>
#include <set>
#include <algorithm>
using namespace std;


void sorted_func_for_finding_duplicate(int arr[],int n){
  sort(arr,arr+n);
  int lastDuplicate = INT16_MAX;
  for (int i = 0; i < n-1; i++)
  {
    if(arr[i]==arr[i+1] && lastDuplicate!=arr[i]){
      cout<<arr[i]<<endl;
      lastDuplicate = arr[i];
    }
  }
  
}

void sorted_func_for_counting_duplicates(int arr[],int n){
  sort(arr,arr+n);
  for (int i = 0; i < n-1; i++){
       if(arr[i]==arr[i+1]){
         int j=i+1;
         while(arr[i]==arr[j]) j++;
         cout<<arr[i]<<" --> "<<j-i<<endl;
         i=j-1;
       }
  }

  
}

void sorted_func_use_hash_table(int arr[],int n){
  sort(arr,arr+n);
  int h = arr[n-1];
  int H[h+1];
  for (int i = 0; i < h+1; i++)
  {
    H[i]=0;
  }

  for (int i = 0; i < n; i++)
  {
    H[arr[i]]++;
  }
  
  for (int i = 0; i < h+1; i++)
  {
    if(H[i]>1) cout<<i<<" --> "<<H[i]<<endl;
  }
  
  
}

void unsorted_func_use_hash_table(int arr[],int n){
  int h = INT16_MIN;
  for (int i = 0; i < n; i++)
  {
     if(h<arr[i]) h=arr[i];  
  }
  
  int H[h+1];
  for (int i = 0; i < h+1; i++)
  {
    H[i]=0;
  }

  for (int i = 0; i < n; i++)
  {
    H[arr[i]]++;
  }
  
  for (int i = 0; i < h+1; i++)
  {
    if(H[i]>1) cout<<i<<" --> "<<H[i]<<endl;
  }
  
  
}

void unsorted_func(int arr[],int n){
  for (int i = 0; i < n-1; i++)
  {
    int count=1;
    if(arr[i]!=-1){
           for (int j = i+1; j < n; j++)
    {
      if(arr[i]==arr[j]){
        count++;
        arr[j]=-1;
      }
    }
    }
    if(count>1)
    cout<<arr[i]<<" --> "<<count<<endl;
   
    
  }
  
}


// map
void func1(int arr[], int n)
{
  map<int, int> m;
  for (int i = 0; i < n; i++)
  {
    m[arr[i]]++;
  }

  for (auto x : m)
  {
    if (x.second > 1)
      cout << x.first << endl;
  }
}

// using hash map
void func2(int arr[], int n)
{
  int fArr[n];
  for (int i = 0; i < n; i++)
  {
    fArr[i] = 0;
  }

  for (int i = 0; i < n; i++)
  {
    fArr[arr[i]] += 1;
  }
  for (int i = 0; i < n; i++)
  {
    if (fArr[i] > 1)
      cout << i << endl;
  }
}

// using linked list
void func3(int arr[], int n)
{
  int slow = arr[0];
  int fast = arr[0];
  do
  {
    slow = arr[slow];
    fast = arr[arr[fast]];
  } while (slow!=fast);
  
  fast = arr[0];
  while (slow!=fast)
  {
    slow = arr[slow];
    fast = arr[fast];
  }
  cout<<slow<<endl;
}
int main()
{
  int arr[] = {8,5,8,9,5,5,5,4,3,2};
  int n = sizeof(arr) / sizeof(arr[0]);
  unsorted_func_use_hash_table(arr,n);
}