#include <iostream>
using namespace std;
#include <fstream>

int count = 0;

class Student {
    private:
        int roll;
        string name;
        string grade;
        int marks;
        string result;
    public:
        void setData() {
            count++;
            cout << "Enter Student Sr. #: " << count << endl;
            cout << "Enter Student name: ";
            cin >> name;
            cout << "Enter Student roll: ";
            cin >> roll;
            cout << "Enter Student grade: ";
            cin >> grade;
            cout << "Enter Student marks: ";
            cin >> marks;
            cout << "Enter Student result: ";
            cin >> result;
        }

        void printData() {
            cout << "Name: " << name << endl;
            cout << "Roll: " << roll << endl;
            cout << "Grade: " << grade << endl;
            cout << "Marks: " << marks << endl;
            cout << "Result: " << result << endl;
        }

        static void exportCSV(Student st[], int n) {
            string filename;
            cout << "Enter file name: ";
            cin >> filename;
            filename = filename + ".csv";

            ofstream fout;
            fout.open(filename, ios::app);

            fout << "Roll,Name,Grade,Marks,Result\n";
            for (int i = 0; i < n; i++) {
                fout << st[i].roll << "," 
                     << st[i].name << "," 
                     << st[i].grade << "," 
                     << st[i].marks << "," 
                     << st[i].result << "\n";
            }
        }
};

int main () {
    int n;
    cout << "Enter the number of Students: ";
    cin >> n;

    Student sts[n];

    for (int i = 0; i < n; i++) {
        sts[i].setData();
    }

    cout << "Displaying All Students" << endl;
    for (int i = 0; i < n; i++) {
        sts[i].printData();
    }

    Student::exportCSV(sts, n);

    return 0;
}
