#include <iostream>
using namespace std;

void swapMaxMin(int arr[], int size)
{
    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}

int main()
{
    int arr[] = {10, 45, 5, 89, 56, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "original array";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    swapMaxMin(arr, size);
    cout << "After swapping max and min";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ",
            cout << endl;
    return 0;
}