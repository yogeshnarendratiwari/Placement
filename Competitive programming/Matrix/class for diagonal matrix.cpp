#include<iostream>
using namespace std;

class DiagonalMatrix{

    private :
    int n;
    int * arr;
    public :
    DiagonalMatrix(int n){
       this->n = n;
       arr = new int[this->n];
    }

    void set(int row,int col,int ele);
    int get(int row,int col);
    void display();
    ~DiagonalMatrix(){
        delete [] arr;
    };
};

void DiagonalMatrix :: set(int row,int col,int ele){
    if(row==col){
        arr[row-1] = ele;
    }
}

int DiagonalMatrix :: get(int row,int col){
    if(row==col) return arr[row-1];
    else return 0; 
}

void DiagonalMatrix :: display(){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i==j) cout<<arr[i-1]<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    
}

int main(){
    DiagonalMatrix diagonal(3);
diagonal.set(1,1,1);
diagonal.set(2,2,2);
diagonal.set(3,3,3);
diagonal.display();
diagonal.~DiagonalMatrix();
}