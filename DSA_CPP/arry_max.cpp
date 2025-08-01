#include <iostream>
using namespace std;

int maxArry(int arr[], int sz)
{
    int start = 0;
    int end = sz - 1;
    if (start > end)
    {
        return start;
    }
    else
    {
        return end;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5} int sz = 5;

    maxArry(arr, sz);
    cout << "max" << maxArry << endl;
    return o;
}