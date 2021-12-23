// Next greater element

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void Next_Greater_Element(int arr[], int n){
  vector<int> v;
  stack <int> st;
  for(int i=n-1 ; i>=0 ; i++){
      if(st.size()==0){
           v.push_back(-1);
           
      }
     
      else if(st.size()>0 && arr[i]<st.top())
      {
          v.push_back(st.top());
          
      }
      else if(st.size()>0 && arr[i]>st.top()){
          while(st.size()>0 && st.top()<=arr[i]){
              st.pop();
          }
          if(st.size()==0)
          v.push_back(-1);
          else
          v.push_back(st.top());
      }
      st.push(arr[i]);

  }
  
  for(int i=v.size()-1 ; i>=0 ;i--){
      cout<<v[i]<<" ";
  }

}

int main(){
    int arr[4] = {1,3,2,4};
    Next_Greater_Element(arr,4);

}