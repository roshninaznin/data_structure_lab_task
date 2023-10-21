/*------------
--------------

Write a program with appropriate data structure to keep records of 10 employees. Each employee will have the following information:
I. Unique ID (you can use integer for this) II. Joining year III. salary Print all the employees’ ID whose has joined before 2009 Print all the employees’ ID who has salary more than 20,000
--------------
---------------*/

#include <iostream>
using namespace std;

struct Employee {
    int id;
    int joiningYear;
    double salary;
};

int main() {
    Employee employees[10];

    employees[0] = {1, 2005, 25000};
    employees[1] = {2, 2010, 18000};
    employees[2] = {3, 2007, 22000};
    employees[3] = {4, 2008, 28000};
    employees[4] = {5, 2015, 30000};
    employees[5] = {6, 2006, 19000};
    employees[6] = {7, 2004, 23000};
    employees[7] = {8, 2012, 26000};
    employees[8] = {9, 2009, 21000};
    employees[9] = {10, 2011, 24000};

    for (int i = 0; i < 10; i++){

         cout << "----- Number " << i+1<< " Employee ----- " << endl;
         cout << "Employee's id: " <<employees[i].id<< endl;
         cout << "Employee's joiningYear: " <<employees[i].joiningYear<< endl;
         cout << "Employee's salary: " <<employees[i].salary<< endl;
         cout<< "\n"<<endl;
    }

    cout << "Employees who joined before 2009:" << endl;
    for (int i = 0; i < 10; i++) {
        if (employees[i].joiningYear < 2009) {
            cout << "Employee ID: " << employees[i].id << endl;
        }
    }

    cout << endl;
    cout << "Employees with a salary greater than 20,000:" << endl;
    for (int i = 0; i < 10; i++) {
        if (employees[i].salary > 20000) {
            cout << "Employee ID: " << employees[i].id << endl;
        }
    }

    return 0;
}
