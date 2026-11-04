// Q2: Print the Fibonacci series using a function.
#include <iostream>
using namespace std;

void printFibonacci(int terms) {
    long long first = 0, second = 1;

    for (int i = 0; i < terms; i++) {
        cout << first << " ";
        long long next = first + second;
        first = second;
        second = next;
    }
    cout << '\n';
}

int main() {
    int terms;
    cout << "How many terms? ";
    cin >> terms;

    if (terms < 0) {
        cout << "Please enter a non-negative number.\n";
    } else {
        printFibonacci(terms);
    }
    return 0;
}
