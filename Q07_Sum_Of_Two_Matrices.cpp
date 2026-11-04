// Q7: Find the sum of two matrices using a function.
#include <iostream>
#include <vector>
using namespace std;

void addMatrices(const vector<vector<int>> &first,
                 const vector<vector<int>> &second,
                 vector<vector<int>> &sum, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sum[i][j] = first[i][j] + second[i][j];
        }
    }
}

int main() {
    int rows, columns;
    cout << "Enter rows and columns: ";
    cin >> rows >> columns;

    if (rows <= 0 || columns <= 0) {
        cout << "Rows and columns must be positive.\n";
        return 0;
    }

    vector<vector<int>> first(rows, vector<int>(columns));
    vector<vector<int>> second(rows, vector<int>(columns));
    vector<vector<int>> sum(rows, vector<int>(columns));

    cout << "Enter first matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++) cin >> first[i][j];

    cout << "Enter second matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++) cin >> second[i][j];

    addMatrices(first, second, sum, rows, columns);

    cout << "Sum of matrices:\n";
    for (const auto &row : sum) {
        for (int value : row) cout << value << " ";
        cout << '\n';
    }
    return 0;
}
