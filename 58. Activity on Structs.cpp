#include <iostream>

using namespace std;

struct Student {
    char name[100];
    int id;
    int age;
    float gpa;
};

Student students[100]; // Can store up to 100 students
int numStudents = 0;

void addStudent() {
    if (numStudents >= 100) {
        cout << "Database is full!" << endl;
        return;
    }

    cout << "Enter student name: ";
    cin.ignore(); // Clear input buffer
    cin.getline(students[numStudents].name, 100);

    cout << "Enter student ID: ";
    cin >> students[numStudents].id;

    cout << "Enter age: ";
    cin >> students[numStudents].age;

    cout << "Enter GPA: ";
    cin >> students[numStudents].gpa;

    numStudents++;
    cout << "Student added successfully!\n";
}

void displayStudents() {
    if (numStudents == 0) {
        cout << "No records found.\n";
        return;
    }

    for (int i = 0; i < numStudents; i++) {
        cout << "Name: " << students[i].name << ", ID: " << students[i].id
             << ", Age: " << students[i].age << ", GPA: " << students[i].gpa << endl;
    }
}

void searchById() {
    int id;
    cout << "Enter student ID to search: ";
    cin >> id;

    for (int i = 0; i < numStudents; i++) {
        if (students[i].id == id) {
            cout << "Student Details:\n";
            cout << "Name: " << students[i].name
                 << "\nID: " << students[i].id
                 << "\nAge: " << students[i].age
                 << "\nGPA: " << students[i].gpa << endl;
            return;
        }
    }

    cout << "Student not found!\n";
}

void updateGPA() {
    int id;
    float newGPA;

    cout << "Enter student ID to update GPA: ";
    cin >> id;

    for (int i = 0; i < numStudents; i++) {
        if (students[i].id == id) {
            cout << "Enter new GPA: ";
            cin >> newGPA;
            students[i].gpa = newGPA;
            cout << "GPA updated successfully!\n";
            return;
        }
    }

    cout << "Student not found!\n";
}

void deleteStudent() {
    int id;
    cout << "Enter student ID to delete: ";
    cin >> id;

    for (int i = 0; i < numStudents; i++) {
        if (students[i].id == id) {
            for (int j = i; j < numStudents - 1; j++) {
                students[j] = students[j + 1];
            }
            numStudents--;
            cout << "Student deleted successfully!\n";
            return;
        }
    }

    cout << "Student not found!\n";
}

int main() {
    int option;

    cout << "--- Student Records Management System ---\n";

    do {
        cout << "\n1. Add Student"
             << "\n2. Display All Students"
             << "\n3. Search Student by ID"
             << "\n4. Update Student GPA"
             << "\n5. Delete Student"
             << "\n6. Exit\n";

        cout << "\nChoose an option: ";
        cin >> option;

        switch (option) {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudents();
            break;
        case 3:
            searchById();
            break;
        case 4:
            updateGPA();
            break;
        case 5:
            deleteStudent();
            break;
        case 6:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid option. Please try again.\n";
        }
    } while (option != 6);

    return 0;
}

