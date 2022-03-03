// Beautiful matrix

#include <iostream>
using namespace std;
int main()
{
    int x, y;
    int matrix[5][5];
    int one = 0, zero = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            
            
               cin>> matrix[i][j] ;
               int m = matrix[i][j];
                if (m == 0)
                    zero++;
                else if (m == 1){
                    x=i;
                    y=j;
                    one++;
                }
                   
                    

        }
    }

    bool canCode = false;
    if (one == 1 && zero == 24)
        canCode = true;
    
   canCode ? cout<<abs(x-2)+abs(y-2) : cout<< "Error";
   

    
}