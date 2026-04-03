#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
};

int main() {
    Student s[100];
    int count = 0;
    int choice;

    while (true) {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter ID: ";
            cin >> s[count].id;
            cout << "Enter Name: ";
            cin >> s[count].name;
            count++;
            cout << "Student Added Successfully!\n";
        }

        else if (choice == 2) {
            if (count == 0) {
                cout << "No students found!\n";
            } else {
                cout << "\nStudent List:\n";
                for (int i = 0; i < count; i++) {
                    cout << s[i].id << " - " << s[i].name << endl;
                }
            }
        }

        else if (choice == 3) {
            int searchId;
            cout << "Enter ID to search: ";
            cin >> searchId;

            bool found = false;
            for (int i = 0; i < count; i++) {
                if (s[i].id == searchId) {
                    cout << "Found: " << s[i].id << " - " << s[i].name << endl;
                    found = true;
                }
            }

            if (!found) {
                cout << "Student not found!\n";
            }
        }

        else if (choice == 4) {
            cout << "Exiting program...\n";
            break;
        }

        else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}