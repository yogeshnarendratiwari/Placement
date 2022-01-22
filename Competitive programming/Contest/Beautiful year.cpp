// Beautiful year

#include <iostream>
#include <set>
using namespace std;

bool checkDistinct(int y)
{
    set<int> s;
    int count = 0;
    while (y > 0)
    {
        s.insert(y % 10);
        count++;
        y = y / 10;
    }
    if (count == s.size())
        return true;
    return false;
}

int main()
{
    int y;
    cin >> y;
    
    if(y>= 1000 && y<= 9000 ){
        while (true)
        {
            y++;
            if(checkDistinct(y)){
                cout<<y<<endl;
                break;
            }
        }

    }

    return 0;
}
