#include<iostream>
using namespace std;

void remove_vowels(string s){
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]!='a'&& s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y' && s[i]!='A'&& s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U' && s[i]!='Y' )
        cout<<s[i];
    }
    
}
string remove_vowels_2(string s){
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y' || s[i]=='A'|| s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y' )
        {s = s.substr(0,i)+s.substr(i+1);
        i--;}
        cout<<endl;
    }
    return s;
}

int main(){
  cout<<remove_vowels_2("Yogesh");
}