#include <iostream>
using namespace std;

int main()
{
    string username, password;
    string storedUsernames[3];
    int attempt;
    bool loginSuccess = false;

    // LOGIN SYSTEM (3 attempts)
    for (attempt = 0; attempt < 3; attempt++)
    {
        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;

        storedUsernames[attempt] = username;

        if (username == "admin" && password == "1234")
        {
            cout << "Login Successful!\n";
            loginSuccess = true;
            break;
        }
        else
        {
            cout << "Incorrect credentials!\n";
        }
    }

    if (!loginSuccess)
    {
        cout << "Too many incorrect attempts. Access Denied.\n";
        return 0;
    }

    // ARRAYS FOR STUDENTS & COURSES
    string studentNames[3];
    int studentAges[3];
    int studentCount = 0;

    string courses[3];
    int courseCount = 0;

    int choice;

    // MAIN MENU
    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Add Course\n";
        cout << "4. View Courses\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            if (studentCount < 3)
            {
                cout << "Enter Student Name: "<<endl;
                cin >> studentNames[studentCount];
                cout << "Enter Student Age: "<<endl;
                cin >> studentAges[studentCount];
                studentCount++;
            }
            else
            {
                cout << "Student limit reached!\n";
            }
        }
        else if (choice == 2)
        {
            if (studentCount == 0)
            {
                cout << "No students added yet.\n";
            }
            else
            {
                cout << "\nStudents List:\n";
                for (int i = 0; i < studentCount; i++)
                {
                    cout << "Name: " << studentNames[i]
                         << ", Age: " << studentAges[i] << endl;
                }
            }
        }
        else if (choice == 3)
        {
            if (courseCount < 3)
            {
                cout << "Enter Course Name: ";
                cin >> courses[courseCount];
                courseCount++;
            }
            else
            {
                cout << "Course limit reached!\n";
            }
        }
        else if (choice == 4)
        {
            if (courseCount == 0)
            {
                cout << "No courses added yet.\n";
            }
            else
            {
                cout << "\nCourses List:\n";
                for (int i = 0; i < courseCount; i++)
                {
                    cout << courses[i] << endl;
                }
            }
        }
        else if (choice == 5)
        {
            cout << "Program Exiting...\n";
        }
        else
        {
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}