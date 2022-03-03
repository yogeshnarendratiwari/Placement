#include<iostream>
using namespace std;



class Union{
 public :
 void unsorted_union(int A[],int m,int B[],int n){
     int U[m+n];
     for (int i = 0; i < m+n; i++)
     {
         U[i] = 0;
     }
     
     for (int i = 0; i < m; i++)
     {
         U[i] = A[i];
     }
     int length = m;
     for (int j = 0; j < n; j++)
     {
         bool copy = true;
         for (int i = 0; i < n+m; i++)
         {
             if(U[i]==B[j])
             copy = false;
             
         }
         if(copy){
             U[length] = B[j];
             length++;
         }
         
     }
     for (int i = 0; i < length; i++)
     {
         cout<<U[i]<<" ";
     }
     
     
 }



 void sorted_union(int A[],int m,int B[],int n){
     int i=0,k=0,j=0;
     int U[m+n];
     while (i<m && j<n)
     {
         if(A[i]>B[j])
         U[k++] = B[j++];
         else if(A[i]<B[j])
         U[k++] = A[i++];
         else{
             U[k++] =A[i++]; j++;
         }

     }

     while (i<m)
     {
         U[k++] = A[i++];
     }

     while (j<n)
     {
         U[k++] = B[j++];
     }
     
     for (int i = 0; i < k; i++)
     {
         cout<<U[i]<<" ";
     }
     
     
 }
}u;

class Intersection{
    public :
    void unsorted_intersection(int A[],int m,int B[],int n){
            int I[m+n];
            int k=0;
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if(A[i]==B[j]){
                        I[k] = A[i];
                        k++;
                        continue;
                    }
                }
                
            }
            for (int i = 0; i <k; i++)
            {
                cout<<I[i]<<" ";
            }
            
    }

    void sorted_intersection(int A[],int m,int B[],int n){
        int i=0,k=0,j=0;
     int I[m+n];
     while (i<m && j<n)
     {
         if(A[i]>B[j])
         {
            j++;
         }
         else if(A[i]<B[j])
          {
              i++;
          }
         else{
             I[k++] =A[i++]; j++;
         }

     }

     
     
     for (int i = 0; i < k; i++)
     {
         cout<<I[i]<<" ";
     }       
    }
}i;

int main(){

int A[5] = {1,2,3,4,5};
int B[5] = {5,6,7,8,9};
u.unsorted_union(A,5,B,5);
cout<<endl; 
u.sorted_union(A,5,B,5); 
cout<<endl;
i.unsorted_intersection(A,5,B,5); 
cout<<endl;
i.sorted_intersection(A,5,B,5); 
}