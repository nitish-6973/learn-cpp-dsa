#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch;
            ch++;
        }
        for (int j = i; j > 0; j--)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    return 0;
}