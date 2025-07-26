#include <iostream>
using namespace std;

// sum of two no. using parameter function

int sum(int a, int b)
{
    int s = a + b;
    return s;
}
// substractin
int sub(int a, int b)
{
    int s = a - b;
    return s;
}
// min of to no
int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    cout << "sum of two no=" << sum(12, 8) << endl;
    cout << "substraction of two no=" << sub(12, 8) << endl;
    cout << "min of two no =" << min(12, 8) << endl;
    return 0;
}
