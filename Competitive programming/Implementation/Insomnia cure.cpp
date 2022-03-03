// Insomnia cure
#include <iostream>
#include <set>
using namespace std;

int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;

    set<int> s;

    for (int i = k; i <= d; i=i+k)
    {
        s.insert(i);
    }
     for (int i = l; i <= d; i=i+l)
    {
        s.insert(i);
    }
     for (int i = m; i <= d; i=i+m)
    {
        s.insert(i);
    }
     for (int i = n; i <= d; i=i+n)
    {
        s.insert(i);
    }

    cout<<s.size()<<endl;
    

}