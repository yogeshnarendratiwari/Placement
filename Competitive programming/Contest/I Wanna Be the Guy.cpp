// I Wanna Be the Guy

#include <iostream>
#include <set>
using namespace std;

int main(){
    int n;
    cin>>n;
    set <int> s;
    int p;
    cin>>p;
    int P[p];
    for (int i = 0; i < p; i++)
    {
        cin>>P[i];
        s.insert(P[i]);
    }
    int q;
    cin>>q;
    int Q[q];
    for (int i = 0; i < q; i++)
    {
        cin>>Q[i];
        s.insert(Q[i]);
    }
    
    if(s.size()==n)
    cout<< "I become the guy."<<endl;
    else
    cout<< "Oh, my keyboard!"<<endl;
    
  
     
     
    
    

    
}