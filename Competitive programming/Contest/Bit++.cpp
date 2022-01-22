// Bit++

#include <iostream>
using namespace std;
int main(){
  int n,x=0;
  cin>>n;
  while (n--)
  {
      string operation;
      cin>>operation;
      if(operation == "++X" || operation == "X++")
      x++;
      else if (operation == "--X" || operation == "X--")
      x--;
  }
  cout<<x<<endl;
  
}