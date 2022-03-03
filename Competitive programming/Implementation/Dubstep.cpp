#include <iostream>
#include <string.h>
using namespace std;
int main()
{

    string dubsetSong;
    cin >> dubsetSong;
    string originalSong = "";
    for (int i = 0; i < dubsetSong.length();)
    {
        if (dubsetSong[i] == 'W' && dubsetSong[i + 1] == 'U' && dubsetSong[i+2] == 'B')
        {
            if (i != 0 && i != dubsetSong.length() - 1)
                originalSong = originalSong + " ";
            i = i + 3;
        }

        else
        {
            originalSong  = originalSong + dubsetSong[i];
            i++;
        }
    }

    cout << originalSong <<endl;
    
}