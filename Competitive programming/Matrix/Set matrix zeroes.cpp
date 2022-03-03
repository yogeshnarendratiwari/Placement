#include<iostream>
#include<vector>
using namespace std;

void solveBrute(vector<vector<int>> v,int n,int m){
    int row=-1;
    int col=-1;

    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j<m; j++)
       {
           if(v[i][j]==0){
               row=i;
               col=j;
               break;
           }
       }
       
    }
    for (int i = 0; i < m; i++)
    {
        if(v[row][i]!=0)
        v[row][i]=-1;
    }
    for (int i = 0; i < n; i++)
    {
        if(v[i][col]!=0)
        v[i][col]=0;
    }
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j<m; j++)
       {
           if(v[i][j]==-1){
               v[i][j]=0;
           }
       }
       
    }
    
     for (int i = 0; i < v.size(); i++)
    {
       for (int j = 0; j<v.size(); j++)
       {
           cout<<v[i][j]<<" ";
       }
       cout<<endl;
    }
    
}

void solveOptimal(vector<vector<int>> v,int n,int m){
    int col[m];
    int row[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<m; j++)
        {
             if(v[i][j]==0){
                 row[i]=0;
                 col[j]=0;
             }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<m; j++)
        {
             if(v[i][j]!=0 &&  row[i]==0 || col[j]==0){
                 v[i][j]=0;
             }
        }
        
    }
    
      for (int i = 0; i < v.size(); i++)
    {
       for (int j = 0; j<v.size(); j++)
       {
           cout<<v[i][j]<<" ";
       }
       cout<<endl;
    }



}
void solveBetterOptimal(vector<vector<int>> v,int n,int m){
    
int col=1;
for (int i = 0; i < n; i++)
{
    if(v[i][0]==0) col =0;
    for (int j = 1; j<m; j++)
    {
        if(v[i][j]==0){
            v[i][0]=0;
            v[0][j]=0;
        }
    }
    
}

for (int i = n-1; i >=0; i--)
{
    
    for (int j = m-1; j>=1; j--)
    {
        if( v[i][0]==0 ||
            v[0][j]==0){
            v[i][j]=0;
        }
       if(col=0) v[i][0]=0;

    }}
     for (int i = 0; i <n; i++)
    {
       for (int j = 0; j<m; j++)
       {
           cout<<v[i][j]<<" ";
       }
       cout<<endl;
    }
    




}

int main(){
        vector<vector<int>> v = {{1,1,2,0},{3,4,5,2},{1,1,1,0}};
        solveBetterOptimal(v,v.size(),v[0].size());
}