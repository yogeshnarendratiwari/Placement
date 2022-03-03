#include<iostream>
using namespace std;
void countingWords(string s){
    int word=1;
    for (int i = 0; s[i]!='\0'; i++)
    {
         if(s[i]==' ' && s[i-1]!= ' ')
         word++;
    }
    cout<<"Words are : "<<word<<endl;
}


int main(){
countingWords("Hello  I am      Yogesh");
}