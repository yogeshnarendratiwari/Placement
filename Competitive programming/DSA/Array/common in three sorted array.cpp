#include<iostream>
using namespace std;


void common(int A[],int B[],int C[],int n1,int n2,int n3){
    int i=0,k1=0,j=0;
     int I1[n1+n2];
     while (i<n1 && j<n2)
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
             I1[k1++] =A[i++]; j++;
         }

     }
     int D[k1];
   
     int n4 = k1;
    

    for (int y = 0; y < k1; y++)
   {
    D[y] = I1[y];
   }

     

     i=0;
     j=0;
     int k2=0;
     int I2[n4+n3];
     while (i<n3 && j<n4)
     {
         if(C[i]>D[j])
         {
            j++;
        }
         else if(C[i]<D[j])
          {
              i++;
          }
         else{
             I2[k2++] =C[i++]; j++;
         }

     }
     for (int x = 0; x < k2; x++)
     {
         cout<<I2[x]<<" ";
     }
     
   
   

}

int main(){
     int A[] = {1, 5, 10, 20, 40, 80};
    int B [] = {6, 7, 40, 80, 100};
     int C[] = {3, 4, 15, 20, 30, 70, 80, 120};
     common(A,B,C,6,5,8);
}