#include <iostream>
using namespace std;
int main()
{
    int nums[] = {5, 16, 56, 37, -8, 9, 0, -1};
    int size = 8;

    int smallest = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
        }
    }
    cout << "smallest=" << smallest << endl;
    return 0;
}