// Petya and string

#include <iostream>
using namespace std;
int main()
{

   string string1,string2;
   cin>>string1>>string2;

   int length1 = string1.length();
   int length2 = string2.length();

   bool canCode = false;
   if(length1==length2 && length1 >=1 && length2<=100){
         for (int i = 0; i < length1; i++)
         {
            if((string1[i] >= 65 && string1[i]<=90) || (string1[i]>=97 && string1[i]<=122) && (string2[i] >= 65 && string2[i]<=90)|| (string2[i]>=97 && string2[i]<=122)){
                  canCode = true;
                  if(string1[i]>= 65 && string1[i] <= 90){
                      string1[i]=string1[i]+32;
                  }
                  if(string2[i]>= 65 && string2[i] <= 90){
                      string2[i]=string2[i]+32;
                  }
            }
            else{
                canCode = false;
                break;
            }
           
         }
         
   }

    if(canCode){
        if(string1 == string2)
        cout<<0<<endl;
        else if(string1>string2)
        cout<<1<<endl;
        else
        cout<<-1<<endl;
    }

    
}