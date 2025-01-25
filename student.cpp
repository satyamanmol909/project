#include <iostream>
#include <string>

int count = 0;

using namespace std;

class Student {
    string name;
    int roll;
    int marks;
    string regno;
    string college;

public:
    void addDetails() {
        cout << "Enter the name: ";
        cin.ignore();
        getline(cin, name);

        roll = ++count;

        cout << "Enter the Registration No.: ";
        getline(cin, regno);

        cout << "Enter the marks: ";
        cin >> marks;

        cout << "Enter the college: ";
        cin.ignore();
        getline(cin, college);
    }

    void showDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Marks: " << marks << endl;
        cout << "Reg No.: " << regno << endl;
        cout << "College: " << college << endl;
    }
};

void displayAllStudents() {
}

int main() {
    int n;
    cout << "Enter the number of Students: ";
    cin >> n;

    Student st[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Student " << i + 1 << ":\n";
        st[i].addDetails();
    }

    for (int i = 0; i < n; i++) {
        cout << "\nDisplaying details of Student " << i + 1 << ":\n";
        st[i].showDetails();
    }

    return 0;
}

