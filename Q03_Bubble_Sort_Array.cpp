// Q3: Sort an array using the bubble sort technique and a function.
#include <iostream>
using namespace std;

void bubbleSort(int values[], int size) {
    for (int pass = 0; pass < size - 1; pass++) {
        bool swapped = false;

        for (int index = 0; index < size - pass - 1; index++) {
            if (values[index] > values[index + 1]) {
                int temporary = values[index];
                values[index] = values[index + 1];
                values[index + 1] = temporary;
                swapped = true;
            }
        }
        if (!swapped) break; // Stop if the array is already sorted.
    }
}

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    if (size <= 0) {
        cout << "Array size must be positive.\n";
        return 0;
    }

    int* values = new int[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) cin >> values[i];

    bubbleSort(values, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) cout << values[i] << " ";
    cout << '\n';

    delete[] values;
    return 0;
}
