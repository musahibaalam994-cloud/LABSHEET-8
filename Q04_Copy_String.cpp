// Q4: Copy one string into another using a function.
#include <iostream>
#include <string>
using namespace std;

void copyString(string source, string &destination) {
    destination = source;
}

int main() {
    string source, destination;
    cout << "Enter a string: ";
    getline(cin, source);

    copyString(source, destination);

    cout << "Original string: " << source << '\n';
    cout << "Copied string: " << destination << '\n';
    return 0;
}
