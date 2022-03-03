#include<iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
      int n = matrix[0].size();
      int m = matrix.size();
      
      vector<int> v;
      for (int i = 0; i < m; i++)
      {
          v.insert(v.end(),matrix[i].begin(),matrix[i].end());
      }
      
      for (int i = 0; i < m*n; i++)
      {
          if(v[i]==target)
          return true;
      }
      
      
      


    }

bool solve(vector<vector<int>>& matrix, int target){
  int index=-1;
  for(int i=0 ; i<=matrix.size()-1 ; i++){
         if(matrix[i][0]<= target && target<=matrix[i+1][0])
         index=i;

  }
  if(index>-1)
  for (int i = 0; i < matrix[0].size(); i++)
  {
      if(matrix[index][i]==target)
      return true;
  }
  
  for (int i = 0; i < matrix[0].size(); i++)
  {
      if(matrix[matrix.size()-1][i]==target)
      return true;
  }
  

  return false;
}

int main(){
  vector<vector<int>> v = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
  cout<<solve(v,13);
}