#include<iostream>
using namespace std;


void func1(string s){
    int i;
   for(i=0 ; s[i]!='\0' ; i++){}
   i=i-1;
   int end = i;
   int start = 0;
   while(start<=end){
       char temp;
       temp = s[start];
       s[start] = s[end];
       s[end] = temp;
       start++;
       end--;
   }

   for (int j = 0; s[j]!='\0' ; j++)
   {
       cout<<s[j];
   }
   

}

void func2(string s){
    int i,j;
    
   for(i=0 ; s[i]!='\0' ; i++){}
   i=i-1;
   char B[i+1];
   for (i = i,j=0; i>=0; i--,j++)
   {
       B[j] = s[i];
   }
   B[j]='\0';
   
   

   for (int j = 0; B[j]!='\0' ; j++)
   {
       cout<<B[j];
   }
   

}

int main(){
  string s = "Yogesh";
  func2(s);
}