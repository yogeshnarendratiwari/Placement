#include <iostream>
using namespace std;

class SudokuSolver
{
    bool findUnassigned(int grid[9][9], int row, int col)
    {
        for (row = 0; row < 9; row++)
        {
            for (col = 0; col < 9; col++)
            {
                if (grid[row][col] == 0)
                    return true;
            }
        }
        return false;
    }
    bool UsedRow(int grid[9][9],int row,int num){
        for (int col = 0; col < 9; col++)
        {
            if(grid[row][col]==num)
            return true;
        }
        return false;
        
    }
    bool UsedColumn(int grid[9][9],int col,int num){
        for (int row = 0; row < 9; row++)
        {
            if(grid[row][col]==num)
            return true;
        }
        return false;
        
    }

    bool UsedBox(int grid[9][9],int BoxStartrow,int BoxStartcol,int num){
        for (int row = 0; row < 9; row++)
        {
            for (int col = 0; col < 9; col++)
            {
                if(grid[row+BoxStartrow][col+BoxStartcol]==num)
                return true;
            }
        
        }
        return false;
        
    }
    bool isSafe(int grid[9][9],int row,int col,int num){
        return !UsedRow(grid,row,num)&&!UsedColumn(grid,col,num)&&!UsedBox(grid,row-row%3,col-col%3,num)&&grid[row][col]==0;
    }
    public :
    bool sudokuSolve(int grid[9][9])
    {
        int row, col;
        if (!findUnassigned(grid, row, col))
            return true;
        for (int num = 1; num<=9; num++)
        {
            if(isSafe(grid,row,col,num)){
                grid[row][col]=num;

                if(sudokuSolve(grid))
                return true;

                grid[row][col]=0;
            }
        }
      return false;
            
    }
}ss;

int main()
{
    int grid[9][9] = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                       { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                       { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                       { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                       { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                       { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                       { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };
    if(ss.sudokuSolve(grid)==true){
        for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
            cout << grid[i][j] << " ";
        cout << endl;
    }
    }
}