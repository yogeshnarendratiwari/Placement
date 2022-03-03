#include<iostream>
using namespace std;


bool Valid_suffle(string a,string b,string final){
  if(a.length()+b.length()!= final.length())
  return false;

  int i=0 , j=0 , k=0;

  while(k<final.length()){
      if(a[i]==final[k] && i<a.length()){
         k++; i++;
      }
      else if(b[j]==final[k] && j<b.length()){
        k++; j++;
      }
      else{
        return false;
      }
  }
  return true;
}


int main(){
cout<< Valid_suffle("xy","12","x13y");
}