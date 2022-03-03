#include<iostream>
using namespace std;

void Using_hash_set(string s){
    // char --> 97-122 and 65-90  
    // array --> 65-122 or 0 - 57

    int Hash[58];
    for (int i = 0; i < 58; i++)
    {
        Hash[i]=0;
    }

    for (int i = 0; s[i]!='\0'; i++)
    {
        Hash[s[i]-65]++;
    }

     for(int i=0 ; i<58 ; i++){
         if(Hash[i]>1){
             cout<<char(i+65)<<" : "<<Hash[i]<<endl;
         }
     }   
     
}

void normal_method (string s){

    int l;
    for (l = 0; s[l]!='\0'; l++)
    {
        
    }
    l=l-1;
    

    for (int i = 0; i<l ; i++)
    {
        int count=1;
        for (int j = i+1; s[j]!='\0'; j++)
        {
            if(s[i]==s[j]) {
                count++;
                s[j]=-1;
            }
        }
        if(count>1 && s[i]!=-1)
        cout<<s[i]<<" : "<<count<<endl;
        
    }
    
}


int main(){
   string s = "Finding";
   normal_method(s);
}