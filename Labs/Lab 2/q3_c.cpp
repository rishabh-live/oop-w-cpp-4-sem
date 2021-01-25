#include <iostream>
#include <string>

using namespace std;

int main()
{

    const int width = 48;
    const int height = 32;

    char board[width][height];

    int i = 0;
    int j = 0;

    for (i = 0; i <= width; ++i)
    {
        for (j = 0; j <= height; ++j)
        {
            if (i % 6 == 0 || j % 4 == 0)
                cout << "+";

            if (i % 6 > 0 || j % 4 == 0)
                cout << "-";

            if (i % 6 == 0 || j % 4 > 0)
                cout << "|";

            if (1 % 6 > 0 || j % 4 > 0)
                cout << " ";
        }
        cout << "\n";
    }

    cout << "\nPress enter to exit";
    cin.ignore(cin.rdbuf()->in_avail() + 1);

    return 0;
}