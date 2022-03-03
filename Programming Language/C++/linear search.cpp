#include<iostream>
using namespace std;

int main(){
  int arr[] = {1,2,3,4,5};
  int ele=4;
  for(auto x : arr){
      if(ele==x){
          cout<<"success"<<endl;
          return 0;
      }
  }
  cout<<"not success"<<endl;
  return 0;
}