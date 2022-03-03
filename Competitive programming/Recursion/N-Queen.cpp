// N Queen problem
#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<int>> v, int row, int col, int n)
{

    for (int col = 0; col < n; col++)
    {
        if (v[row][col] == 1)
            return false;
    }
    for (int row = 0; row < n; row++)
    {
        if (v[row][col] == 1)
            return false;
    }

    while (row >= 0 && col >= 0)
    {
        if (v[row][col] == 1)
            return false;
        row--;
        col--;
    }

    while (row >= 0 && col < n)
    {
        if (v[row][col] == 1)
            return false;
        row--;
        col++;
    }
    return true;
}

bool NQueen(vector<vector<int>> v, int row, int n,vector<int> &ans)
{
    
    if (row == n)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }

        return true;
    }

    for (int col = 0; col < n; col++)
    {
        if (isSafe(v, row, col, n))
        {
            v[row][col] = 1;
            ans.push_back(col);
            if (NQueen(v, row + 1, n,ans))
                return true;
            v[row][col] = 0;
            ans.pop_back();
        }
    }
    return false;
}


int main()
{
    int n;
    cin >> n;
    
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            v[i][j] = 0;
        }
    }
     vector<int> ans;
     NQueen(v,0,n,ans);
     for (int i = 0; i < ans.size(); i++)
     {
        cout<<ans[i]<<" ";
     }
     
}
