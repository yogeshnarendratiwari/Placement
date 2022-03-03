#include<iostream>
using namespace std;

void vowel_and_consonants(string s){
    int vowel = 0;
    int i;
    for (i = 0; s[i]!='\0'; i++)
    {
        if(s[i]=='A' || s[i] == 'a'||s[i]=='E' || s[i] == 'e' ||s[i]=='I' || s[i] == 'i' ||s[i]=='O' || s[i] == 'o'||s[i]=='U' || s[i] == 'u')
        vowel++;
    }
    cout<<"Vowel : "<<vowel<<endl;
    cout<<"Consonant : "<<i-vowel<<endl;
    
}

int main(){
        vowel_and_consonants("Yogesh");
}