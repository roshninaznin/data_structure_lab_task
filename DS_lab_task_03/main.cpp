#include <iostream>

using namespace std;

struct Student {
    string  id;
    int semestersCompleted;
    int creditsCompleted;
    double cgpa;

   Student(string studentId, int semesters, int credits, double gpa) {
        id = studentId;
        semestersCompleted = semesters;
        creditsCompleted = credits;
        cgpa = gpa;
    }

    void CGPA() {
        if (cgpa > 3.50) {
            cout << "Student ID: " << id << endl;
        }
    }

    void Credits() {
        if (creditsCompleted > 50) {
            cout << "Student ID: " << id << endl;
        }
    }

    void SemestersAndCredits() {
        if (semestersCompleted >= 2 && creditsCompleted >= 28) {
            cout << "Student ID: " << id << endl;
        }
    }
};

int main() {
    // Create instances for each of the 10 students
    Student students[] = {
        {"22-46092-1", 3, 60, 3.35},
        {"22-46092-2", 4, 70, 3.60},
        {"22-46092-3", 2, 45, 3.90},
        {"22-46092-4", 6, 90, 3.20},
        {"22-46092-5", 3, 55, 3.30},
        {"22-46092-6", 4, 65, 3.85},
        {"22-46092-7", 5, 75, 3.54},
        {"22-46092-8", 2, 35, 3.80},
        {"22-46092-9", 4, 70, 3.38},
        {"22-46092-10", 3, 60, 3.67},

    };

    cout << "Students with CGPA > 3.50:" << endl;
    students[0].CGPA();
    students[1].CGPA();
    students[2].CGPA();
    students[3].CGPA();
    students[4].CGPA();
    students[5].CGPA();
    students[6].CGPA();
    students[7].CGPA();
    students[8].CGPA();
    students[9].CGPA();

    cout << endl;
    cout << "Students with more than 50 credits completed:" << endl;
    students[0].Credits();
    students[1].Credits();
    students[2].Credits();
    students[3].Credits();
    students[4].Credits();
    students[5].Credits();
    students[6].Credits();
    students[7].Credits();
    students[8].Credits();
    students[9].Credits();

    cout << endl;
    cout << "Students with at least 2 semesters and at least 28 credits completed:" << endl;
    students[0].SemestersAndCredits();
    students[1].SemestersAndCredits();
    students[2].SemestersAndCredits();
    students[3].SemestersAndCredits();
    students[4].SemestersAndCredits();
    students[5].SemestersAndCredits();
    students[6].SemestersAndCredits();
    students[7].SemestersAndCredits();
    students[8].SemestersAndCredits();
    students[9].SemestersAndCredits();


    return 0;
}
