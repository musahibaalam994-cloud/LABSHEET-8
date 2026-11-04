// Q11: Create multiple Car objects and display their information.
#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    double price;

    void input() {
        cout << "Enter car brand: ";
        getline(cin >> ws, brand);
        cout << "Enter car price: ";
        cin >> price;
    }

    void display() const {
        cout << "Brand: " << brand << ", Price: " << price << '\n';
    }
};

int main() {
    const int numberOfCars = 3;
    Car cars[numberOfCars];

    for (int i = 0; i < numberOfCars; i++) {
        cout << "\nEnter details for car " << i + 1 << ":\n";
        cars[i].input();
    }

    cout << "\nCar Information\n";
    for (int i = 0; i < numberOfCars; i++) {
        cout << "Car " << i + 1 << ": ";
        cars[i].display();
    }
    return 0;
}
