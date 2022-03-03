#include<iostream>
using namespace std;


bool isPalindrome(string s){
    int i;
   for(i=0 ; s[i]!='\0' ; i++){}
   i=i-1;
   int end = i;
   int start = 0;
   while(start<=end){
       if(s[start]!=s[end]) return false;
       start++;
       end--;}
       return true;
}


int main(){
   string s = "abc";
   cout<<isPalindrome(s);
}