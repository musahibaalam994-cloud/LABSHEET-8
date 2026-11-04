// Q10: Define a Student class and input/display student details.
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll_no;
    float marks;

public:
    void input() {
        cout << "Enter student name: ";
        getline(cin >> ws, name);
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() const {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << '\n';
        cout << "Roll Number: " << roll_no << '\n';
        cout << "Marks: " << marks << '\n';
    }
};

int main() {
    Student student;
    student.input();
    student.display();
    return 0;
}
