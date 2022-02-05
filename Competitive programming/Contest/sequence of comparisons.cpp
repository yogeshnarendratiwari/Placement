#include<iostream>
using namespace std;

int main(){

        int t;
        cin>>t;
        while (t--)
        {
            string s;
            cin>>s;
            int greater=0,less = 0;
            for (int i = 0; i < s.length(); i++)
            {
                if(s[i]=='>')
                greater++;
                else if(s[i]=='<')
                less++;
                
                               
            }

       
            if(greater==0 && less!=0)
            cout<<"<"<<endl;
            else if(less==0 && greater!=0)
            cout<<">"<<endl;
            else if(greater==0 && less == 0)
            cout<<"="<<endl;
            else
            cout<<"?"<<endl;
            
        }
        

}