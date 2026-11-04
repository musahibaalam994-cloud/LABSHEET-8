// Q9: Swap two numbers using call-by-reference.
#include <iostream>
using namespace std;

void swapNumbers(int &first, int &second) {
    int temporary = first;
    first = second;
    second = temporary;
}

int main() {
    int first, second;
    cout << "Enter two numbers: ";
    cin >> first >> second;

    cout << "Before swapping: " << first << " " << second << '\n';
    swapNumbers(first, second);
    cout << "After swapping: " << first << " " << second << '\n';

    return 0;
}
