#include <iostream>
#include <string>
using namespace std;
class University {
private:
    string universityName;
    string location;

public:
    // Constructor
    University(string name, string loc) {
        universityName = name;
        location = loc;
    }

    // Display university details
    void displayUniversity() const {
        cout << "University Name : " << universityName << endl;
        cout << "Location        : " << location << endl;
    }
    class Department {
    private:
        string departmentName;
        int totalStudents;

    public:
        // Constructor
        Department(string deptName, int students) {
            departmentName = deptName;
            totalStudents = students;
        }

        // Display department details
        void displayDepartment(const University &uni) const {
            cout << "\n--- Department Details ---" << endl;
            cout << "Department Name : " << departmentName << endl;
            cout << "Total Students  : " << totalStudents << endl;
            cout << "University      : " << uni.universityName << endl;
        }
    };
};

int main() {
    University uni("Delhi University", "Vishwavidhyalaya");
    cout << "University Details" << endl;
    uni.displayUniversity();
    University::Department dept("Computer Science", 450);
    dept.displayDepartment(uni);
    return 0;
}
