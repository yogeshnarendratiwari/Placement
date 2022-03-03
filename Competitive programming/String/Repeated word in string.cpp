#include<iostream>
#include <map>
using namespace std;

void solve(string arr[],int n){
  map<string,int> m;
  for (int i = 0; i < n; i++)
  {
      m[arr[i]]++;
  }
  int first_max = INT16_MIN;
  int second_max = INT16_MIN;
  for (auto x:m)
  {
    if(x.second>first_max)
    {
        second_max=first_max;
        first_max=x.second;
    }
    else if(x.second>second_max && x.second!=first_max){
        second_max = x.second;
    }
  } 

  for (auto x : m)
  {
      if(x.second==second_max)
      {
          cout<<x.first;
          break;
      }
  }
  
}

int main(){
  string arr[]={"aaa","bbb","ccc","bbb","aaa","aaa"};
  solve(arr,6);
}