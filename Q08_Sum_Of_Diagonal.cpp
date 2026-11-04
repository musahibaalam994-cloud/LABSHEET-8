// Q8: Find the sum of the main diagonal elements of a square matrix.
#include <iostream>
#include <vector>
using namespace std;

int diagonalSum(const vector<vector<int>> &matrix, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) sum += matrix[i][i];
    return sum;
}

int main() {
    int size;
    cout << "Enter order of square matrix: ";
    cin >> size;

    if (size <= 0) {
        cout << "Size must be positive.\n";
        return 0;
    }

    vector<vector<int>> matrix(size, vector<int>(size));
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++) cin >> matrix[i][j];

    cout << "Sum of main diagonal elements: "
         << diagonalSum(matrix, size) << '\n';
    return 0;
}
