#include <iostream>
using namespace std;
int main()
{
    int n = 50;

    for (int i = 0; i <= n; i++)
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    cout << endl;
    return 0;
}