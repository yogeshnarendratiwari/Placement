#include<iostream>
#include <vector>
using namespace std;

// element at some position (row,col)
int func1(vector<vector<int>> &v ,int n,int row,int col){
    int res=1;
    for (int i = 0; i < col-1; i++)
    {
        
        res = res * (row-1-i);
        res = res / (i+1);
    }
    return res;
    
}


// elements in a row
void func2(vector<vector<int>> &v ,int n,int row){
    int res=1;
    for (int i = 0; i < row; i++)
    {
        cout<<res<<" ";
        res = res * (row-1-i);
        res = res / (i+1);
    }

}

// printing whole pascal's triangle
void func3(vector<vector<int>> &v ,int n){
     for (int i=0 ; i<n ; i++)
     {
         v.resize(i+1);
         v[i][0] = v[i][i] = 1;
         for (int j = 1; j<i; j++)
         {
             v[i][j] = v[i-1][j-1] + v[i-1][j];
         }
         
     }

     for (int i = 0; i < n; i++)
     {
        for (int j = 0; j<= i; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
        
     }
     
     
}


int main(){
    vector<vector<int>> v(5);
    func3(v,5);
}