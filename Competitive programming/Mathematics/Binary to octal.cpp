#include <iostream>
#include <cmath>
using namespace std;

string BinaryToDecimal(string s){
   int base=1;
   int result=0;
   for (int i =0 ; i<s.length() ; i++)
   {
      if(s[i]=='1')
      result += base;
      base *= 2;
   }

   return to_string(result);
   
}

void reverse(string &s){
  int st=0;
  int e = s.length()-1;
  while(st<=e){
    swap(s[st],s[e]);
     st++;
     e--;
  }
}


string BinaryToOctal(string binary)
{
    string temp="";
    int count=1;
    string ans="";
    for (int i = binary.length()-1; i >=0; i--)
    {
          temp=temp+binary[i];
          if(count==4 || i==0)
          {
             ans = ans + BinaryToDecimal(temp);
             temp="";
             count=1;
          }
          count++;

    }
    reverse(ans);
  return ans;
}

int main()
{
  cout<<BinaryToOctal("101000");
}