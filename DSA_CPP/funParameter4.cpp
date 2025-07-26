// Calcualte sum of numbers from 1 to N.
#include <iostream>
using namespace std;

int sumN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    cout << "sum of no=" << sumN(5) << endl;
    return 0;
}