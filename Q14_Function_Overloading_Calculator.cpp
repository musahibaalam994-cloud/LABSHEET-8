// Q14: Demonstrate function overloading in a Calculator class.
#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int first, int second) {
        return first + second;
    }

    double add(double first, double second) {
        return first + second;
    }
};

int main() {
    Calculator calculator;

    int integerFirst, integerSecond;
    double decimalFirst, decimalSecond;

    cout << "Enter two integers: ";
    cin >> integerFirst >> integerSecond;
    cout << "Integer addition: "
         << calculator.add(integerFirst, integerSecond) << '\n';

    cout << "Enter two decimal numbers: ";
    cin >> decimalFirst >> decimalSecond;
    cout << "Decimal addition: "
         << calculator.add(decimalFirst, decimalSecond) << '\n';

    return 0;
}
