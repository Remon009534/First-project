#include <iostream>
using namespace std;

int main()
{
    int j, i;
    for(int j = 0; j < 4; ++j)
    {
        for(int i = 0; i <= j; ++i)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}