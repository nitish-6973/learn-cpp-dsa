// WAF to calculate sum & product of all number in array.
#include <iostream>
using namespace std;

int productArray(int arr[], int sz)
{
    int prod = 1;
    for (int i = 0; i < sz; i++)
    {
        prod *= arr[i];
    }
    return prod;
}
int sumArray(int arr[], int sz)
{
    int sum = 0;
    {
        for (int i = 0; i < sz; i++)
            sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int sz = sizeof(arr) / sizeof(arr[0]);

    int result1 = productArray(arr, sz);
    int result2 = sumArray(arr, sz);

    cout << "Product of array element =" << result1 << endl;
    cout << "Product of array element =" << result2 << endl;

    return 0;
}