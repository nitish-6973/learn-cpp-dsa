#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50}; // Sample array
    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter the number to find in the array: ";
    cin >> target;

    int index = -1; // -1 means not found

    // Linear search to find index
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            index = i;
            break;
        }
    }

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}
