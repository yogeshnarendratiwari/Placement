#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int x, int y, int N, vector<vector<int>> visited, vector<vector<int>> M)
{
    if (x >= 0 && x < N && y >= 0 && y < N && visited[x][y] == 0 && M[x][y] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve(vector<vector<int>> M, vector<string> &ans, string path, vector<vector<int>> visited, int x, int y, int N)
{

    if (x == N - 1 && y == N - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    if (isSafe(x, y - 1, N, visited, M))
    {
        path.push_back('U');
        solve(M, ans, path, visited, x, y - 1, N);
        path.pop_back();
    }
    if (isSafe(x, y + 1, N, visited, M))
    {
        path.push_back('D');
        solve(M, ans, path, visited, x, y + 1, N);
        path.pop_back();
    }
    if (isSafe(x + 1, y, N, visited, M))
    {
        path.push_back('R');
        solve(M, ans, path, visited, x + 1, y, N);
        path.pop_back();
    }
    if (isSafe(x - 1, y, N, visited, M))
    {
        path.push_back('L');
        solve(M, ans, path, visited, x - 1, y, N);
        path.pop_back();
    }

    visited[x][y] = 0;
}

vector<string> RatInAMaze(vector<vector<int>> M, int N)
{
    vector<string> ans;
    int x = 0, y = 0;

    vector<vector<int>> visited = M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; i < N; i++)
        {
            visited[i][j] = 0;
        }
    }

    string path = "";
    solve(M, ans, path, visited, x, y, N);
    cout<<ans.size()<<endl;
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> M;
    for (int i = 0; i < n; i++)
    {
        vector<int> x;
        for (int j = 0; j < n; j++)
        {
            int ele;
            cin >> ele;
            x.push_back(ele);
        }
        M.push_back(x);
    }
     
    for (int i = 0; i < RatInAMaze(M, n).size(); i++)
    {
        cout << RatInAMaze(M, n)[i] << endl;
    }
}