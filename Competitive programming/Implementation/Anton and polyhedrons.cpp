#include<iostream>
using namespace std;

int func(string s){
  if(s=="Tetrahedron")
  return 4;
  else if(s=="Cube")
  return 6;
  else if(s=="Octahedron")
  return 8;
  else if(s=="Dodecahedron")
  return 12;
  else if(s=="Icosahedron")
  return 20;
}


int main(){
   int n;
   cin>>n;
   int ans = 0;
   while (n--)
   {
       string s;
       cin>>s;
      ans += func(s);
   }
   cout<<ans<<endl;
   
}