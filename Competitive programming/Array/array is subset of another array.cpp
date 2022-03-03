#include<iostream>
#include <algorithm>

using namespace std;
string isSubset(int A[], int B[], int n1, int n2) {
if(n1<n2) return "No";
  sort(A,A+n1);  
  sort(B,B+n2);
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
     if(k1==0)
     return "No";
  bool Subset = true;
  for(int x=0; x<n2 ;x++ ){
      if(I1[x]!=B[x])
      Subset = false;
  }
  
  return Subset ? "Yes" : "No";
  
    
}
int main(){


}