#include <iostream>
using namespace std;

int main()
{
    int j, m;
    for(int j = 0; j < 4; ++j)
    {
        for(int m = 4 - j; m > 0; m--)
        {
            cout << " ";
        }
        for(int i = 0; i <= j; ++i)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}