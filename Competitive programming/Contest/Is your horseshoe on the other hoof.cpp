// Is your horseshoe on the other hoof?

#include <iostream>
#include <set>
using namespace std;

int main()
{
    long long arr[4];

    for (long long i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

     set<long long> s;
     for (long long i = 0; i < 4; i++)
     {
        s.insert(arr[i]);
     }
     cout<<4-s.size()<<endl;
     return 0;
}
