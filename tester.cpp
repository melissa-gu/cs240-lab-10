// Programmers: Melissa Gu and Trevor LeForge
#include "Person.h"
#include "Student.h"

#include <iostream>

using namespace std;

int main() 
{

    cout << "-----------------------------------------------------" << endl;
    cout << "                   Testing Person                    " << endl;
    cout << "-----------------------------------------------------" << endl << endl;
    
    cout << "Testing setters/getters:" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Person p;" << endl;
    Person p;
    cout << "p.setFirstName(\"Lilly\")" << endl;
    p.setFirstName("Lilly");
    cout << "First Name: " << p.getFirstName() << "[Expected: Lilly]" << endl;


    cout << "-----------------------------------------------------" << endl;
    cout << "                   Testing Student                   " << endl;
    cout << "-----------------------------------------------------" << endl << endl;

    cout << "-------------------------" << endl;
    cout << "Testing setters/getters:" << endl;
    cout << "-------------------------" << endl;
    // Default Constructor
    cout << "Student s1;" << endl;
    Student s1;
    // cout << "Student s2 = Student(s1);" << endl;
    // // Copy Constructor
    // Student s2 = Student(s1);
    // // Full Constructor
    // cout << "Student s3 = Student(11111111, \"ab1cd\", \"Smith\", \"John\", 10, 4, 98, \"john.smith@richmond.edu\", \"1234 Main St\", 5551212, 1, 1, 2018, Student::AS, true, 2.5);" << endl;
    // Student s3 = Student(11111111, "ab1cd", "Smith", "John", 10, 4, 98,
    //                     "john.smith@richmond.edu", "1234 Main St", 5551212, 1,
    //                     1, 2018, Student::AS, true, 2.5);

    // Test admitDate Getter/Setter
    cout << "s1.setAdmitDate(1, 1, 118);" << endl;
    s1.setAdmitDate(1, 1, 118);
    cout << "Admit Date: " << s1.getAdmitDate().tm_mday << ", " 
         << s1.getAdmitDate().tm_mon << ", " 
         << s1.getAdmitDate().tm_year << " [Expected: 1, 1, 118]" << endl;
    cout << endl;

    // Test school Getter/Setter
    cout << "s1.setSchool(Student::AS);" << endl;
    s1.setSchool(Student::AS);
    string schoolName; 
    switch(s1.getSchool())
    {
        case 0: schoolName = "AS";
                break;
        case 1: schoolName = "JSLS";
                break;
        case 2: schoolName = "LAW";
                break;
        case 3: schoolName = "RSB";
                break;
        case 4: schoolName = "SPCS";
                break;
        case 5: schoolName = "UNDEFINED";
                break;
    };
    cout << "School: " << schoolName << " [Expected: AS]" << endl;
    cout << endl;

    // Testing GPA Getter/Setter
    cout << "s1.setGPA(3.7);" << endl;
    s1.setGPA(3.7);
    cout << "GPA: " << s1.getGPA() << " [Expected: 3.7]" << endl;
    cout << endl;

    // Testing Units Completed Getter/Setter
    cout << "s1.setUnitsCompleted(2.5);" << endl;
    s1.setUnitsCompleted(2.5);
    cout << "Units Completed: " << s1.getUnitsCompleted() << " [Expected: 2.5]" << endl;
    cout << endl;

    // Testing Full Time Status Getter/Setter
    cout << "s1.setFullTimeStatus(true);" << endl;
    s1.setFullTimeStatus(true);
    cout << "Full Time Status: " << boolalpha << s1.isFullTime() << " [Expected: true]" << endl;
    cout << endl;

    return 0;
}
