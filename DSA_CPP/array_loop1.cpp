#include <iostream> // for cout
#include <climits>  // for INT_MAX

using namespace std;

int main()
{
    int nums[] = {5, 16, 56, 37, -8, 9, 0, -1};
    int size = 8;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }
    cout << "largest=" << largest << endl;
    cout << "smallest=" << smallest << endl;

    return 0;
}
