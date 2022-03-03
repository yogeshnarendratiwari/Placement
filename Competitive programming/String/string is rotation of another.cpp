#include<iostream>
using namespace std;

bool rotation(string s1,string s2){
    if(s1.length()!=s2.length()) return false;
    
    string temp = s1+s1;
    return (temp.find(s2)!=string::npos);
    
}


int main(){
 string s1="ABCS";
 string s2 = "CDAB";

 cout<<rotation(s1,s2);

}