// In Search of an Easy Problem
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int opinion[n];
    for (int i = 0; i < n; i++)
    {
        cin>>opinion[i];
    }
    bool answer = true;

    for (int i = 0; i < n; i++)
    {
       if(opinion[i]==1){
           answer = false;
           break;
       }
    }

    if(answer)
    cout<<"EASY"<<endl;
    else
    cout<<"HARD"<<endl;
    
}