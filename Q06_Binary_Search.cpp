// Q6: Search for an element using binary search.
// Note: Binary search requires the input array to be sorted in ascending order.
#include <iostream>
using namespace std;

int binarySearch(const int values[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int middle = low + (high - low) / 2;

        if (values[middle] == target) return middle;
        if (values[middle] < target)
            low = middle + 1;
        else
            high = middle - 1;
    }
    return -1;
}

int main() {
    int size;
    cout << "Enter size of sorted array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Array size must be positive.\n";
        return 0;
    }

    int* values = new int[size];
    cout << "Enter " << size << " elements in ascending order: ";
    for (int i = 0; i < size; i++) cin >> values[i];

    int target;
    cout << "Enter element to search: ";
    cin >> target;

    int position = binarySearch(values, size, target);
    if (position == -1)
        cout << "Element not found.\n";
    else
        cout << "Element found at position " << position + 1 << ".\n";

    delete[] values;
    return 0;
}
