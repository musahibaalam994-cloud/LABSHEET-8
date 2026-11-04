// Q5: Count the words in a string using a function.
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int countWords(const string &text) {
    istringstream input(text);
    string word;
    int count = 0;

    while (input >> word) count++;
    return count;
}

int main() {
    string text;
    cout << "Enter a sentence: ";
    getline(cin, text);

    cout << "Number of words: " << countWords(text) << '\n';
    return 0;
}
