#include<iostream>
using namespace std;

void merge(int A[],int m,int B[],int n){
      int i=0,k=0,j=0;
     int M[m+n];
     while (i<m && j<n)
     {
         if(A[i]>B[j])
         {
            M[k++] = B[j++];
         }
         else 
          {
            M[k++] = A[i++];
          }
         

     }

      while (i<m)
     {
         M[k++] = A[i++];
     }

     while (j<n)
     {
         M[k++] = B[j++];
     }

     
     
     for (int i = 0; i < k; i++)
     {
         cout<<M[i]<<" ";
     }       
    }


int main(){
    int A[5] = {1,8,9,11,15};
    int B[8] = {2,3,4,5,10,11,12,16};
    merge(A,5,B,8);
}