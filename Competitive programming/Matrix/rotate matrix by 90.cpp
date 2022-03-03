#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve(vector<vector<int>> v,int n,int m){
   for (int i = 0; i < m; i++)
   {
       for (int j = n-1; j >= 0; j--)
       {
           cout<<v[j][i]<<" ";
       }
     cout<<endl;       
   }

   
}

void optimal(vector<vector<int>> v,int n,int m){
   for(int i=0 ; i<n;i++){
      for(int j=0 ; j<i ; j++){
         swap(v[i][j],v[j][i]);
      }
   }

   for(int i=0 ; i<n ; i++){
      reverse(v[i].begin(),v[i].end());
   }

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j<m;j++)
      {
         cout<<v[i][j]<<" ";
      }
      cout<<endl;
   }
   
}


int main(){
   vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};
   solve(v,v.size(),v[0].size());
}