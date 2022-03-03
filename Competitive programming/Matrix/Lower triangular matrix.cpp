#include<iostream>
using namespace std;

class Lower_triangular_by_row_major{

private :
    int n;
    int * arr;
    public :
    Lower_triangular_by_row_major(int n){
       this->n = n;
       arr = new int[this->n];
    }

    void set(int ele,int index){
        
            arr[index] = ele;
    }
    int get(int row,int col){
        if(row>=col) return arr[row*(row-1)/2 + col-1];
        else return 0;
    }
    void display(){
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 1; j <= 3; j++)
            {
                if(i>=j) cout<<arr[i*(i-1)/2 + j-1]<<" ";
                else cout<<0<<" ";
            }
            cout<<endl;
            
        }
        
    }
    ~Lower_triangular_by_row_major(){
        delete [] arr;
    };

};


class Lower_triangular_by_col_major{

private :
    int n;
    int * arr;
    public :
    Lower_triangular_by_col_major(int n){
       this->n = n;
       arr = new int[this->n];
    }

    void set(int ele,int index){
        
            arr[index] = ele;
    }
    int get(int row,int col){
        if(row>=col) return arr[n*(col-1)+((col-2)*(col-1))/2 + row-col];
        else return 0;
    }
    void display(){
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 1; j <= 3; j++)
            {
                if(i>=j) cout<<arr[i*(i-1)/2 + j-1]<<" ";
                else cout<<0<<" ";
            }
            cout<<endl;
            
        }
        
    }
    ~Lower_triangular_by_col_major(){
        delete [] arr;
    };

};

int main(){
  Lower_triangular_by_col_major ltrm(6);
  ltrm.set(1,0);
  ltrm.set(1,1);
  ltrm.set(1,2);
  ltrm.set(1,3);
  ltrm.set(1,4);
  ltrm.set(1,5);
        ltrm.display();

}