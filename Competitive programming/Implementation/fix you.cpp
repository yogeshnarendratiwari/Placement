#include<iostream>
#define N 100
#define M 100

using namespace std;

typedef long long var;

void solve(var n,var m,char matrix[N][M]){
var count = 0;
for (int col = 0; col < n; col++)
{
    if(matrix[n-1][col]!='R')
    count++;
}

for (int row = 0; row < m; row++)
{
    if(matrix[row][m-1]!='D')
    count++;
}
cout<<count-2<<endl;

}


int main(){
var t;
cin>>t;
while(t--){
    var n,m;
    cin>>n>>m;
    char matrix[N][M];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
        
    }
    solve(n,m,matrix);
    
}
}