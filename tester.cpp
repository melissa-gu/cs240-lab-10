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

    cout << "--------------------------------" << endl;
    cout << "Testing setters/getters:" << endl;
    cout << "--------------------------------" << endl << endl;
    cout << "Person p;" << endl;
    Person p;
    
    cout << "p.setFirstName(\"Lilly\")" << endl;
    p.setFirstName("Lilly");
    cout << "First Name: " << p.getFirstName() << "[Expected: Lilly]" << endl;
    cout << endl;

    cout << "p.setLastName(\"Lawson\")" << endl;
    p.setLastName("Lawson");
    cout << "Last Name: " << p.getLastName() << "[Expected: Lawson]" << endl;
    cout << endl;

    cout << "p.setDateOfBirth(18, 6, 2010);" << endl;
    p.setDateOfBirth(18, 6, 2010);
    cout << "Date of Birth: " << p.getDateOfBirth().tm_mday << ", ";
    cout << p.getDateOfBirth().tm_mon << ", " << p.getDateOfBirth().tm_year;
    cout << "[Expected: 18, 6, 2010]" << endl;
    cout << endl;

    cout << "p.setAddress(\"101 Butter St.\");" << endl;
    p.setAddress("101 Butter St.");
    cout << "Address: " << p.getAddress() << "[Expected: 101 Butter St.]";
    cout << endl << endl;
  
    cout << "p.setNetID(\"ll8xd\");" << endl;
    p.setNetID("ll8xd");
    cout << "NetID: " << p.getNetID() << "[Expected: ll8xd]";
    cout << endl << endl;
    
    cout << "p.setURID(90101019);" << endl;
    p.setURID(90101019);
    cout << "URID: " << p.getURID() << "[Expected: 90101019]";
    cout << endl << endl;

    cout << "p.setEmail(\"goodpup@gmail.com\")" << endl;
    p.setEmail("goodpup@gmail.com");
    cout << "Email: " << p.getEmail() << "[Expected: goodpup@gmail.com]";
    cout << endl << endl;

    cout << "p.setPhone(7577330910);" << endl;
    p.setPhone(7577330910);
    cout << "Phone: " << p.getPhone() << "[Expected: 7577330910]";
    cout << endl << endl;

    cout << "--------------------------------" << endl;
    cout << "Testing Constructors:" << endl;
    cout << "--------------------------------" << endl << endl;
    cout << "Person p2 = p;" << endl;
    Person p2 = p;
    cout << "Testing to see if it has most of the same data stored;" << endl;
    cout << "First Name: " << p2.getFirstName() << "[Expected: Lilly]" << endl;
    cout << "Last Name : " << p2.getLastName() << "[Expected: Lawson]" << endl;
    cout << "Date of Birth: " << p2.getDateOfBirth().tm_mday << ", ";
    cout << p.getDateOfBirth().tm_mon << ", " << p.getDateOfBirth().tm_year;
    cout << "[Expected: 18, 6, 2010]" << endl << endl;

    cout << "Now going to change the name..." << endl;
    cout << "p2.setFirstName(\"Barry\");" << endl;
    p2.setFirstName("Barry");
    cout << "p First Name : " << p.getFirstName() << "[Expected: Lilly]";
    cout << endl;
    cout << "p2 First Name: " << p2.getFirstName() << "[Expected: Barry]";
    cout << endl << endl; 
    
    cout << "Person p3 = Person(49700010, \"ab3de\", \"Battleson\",";
    cout << "\"Andrew\", " << endl << "15, 4, 1997, \"andyb123@gmail.com\",";
    cout << endl << "\"404 Texas Ave.\", 8042121515)" << endl;
    Person p3 = Person(49700010, "ab3de", "Battleson", "Andrew", 15, 4, 1997, "andyb123@gmail.com", "404 Texas Ave.", 8042121515);

    cout << "First Name: " << p3.getFirstName() << "[Expected: Andrew]";
    cout << endl;
    cout << "Email: " << p3.getEmail() << "[Expected: andyb123@gmail.com]";
    cout << endl;


    cout << endl;

    cout << "-----------------------------------------------------" << endl;
    cout << "                   Testing Student                   " << endl;
    cout << "-----------------------------------------------------" << endl << endl;

    cout << "--------------------------------" << endl;
    cout << "Testing setters/getters:" << endl;
    cout << "--------------------------------" << endl << endl;
    // Default Constructor
    cout << "Student s1;" << endl;
    Student s1;

    // Testing admitDate Getter/Setter
    cout << "s1.setAdmitDate(1, 1, 2018);" << endl;
    s1.setAdmitDate(1, 1, 2018);
    cout << "Admit Date: " << s1.getAdmitDate().tm_mday << ", " 
         << s1.getAdmitDate().tm_mon << ", " 
         << s1.getAdmitDate().tm_year << " [Expected: 1, 1, 118]" << endl;
    cout << endl;

    // Testing school Getter/Setter
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

    // Testing Add Course
    cout << "s1.addCourse(\"CS150\");" << endl;
    s1.addCourse("CS150");
    cout << "Courses: "; 
    s1.printCourses(); 
    cout << " [Expected: CS150]" << endl;
    cout << endl;

    // Testing Set Courses
    cout << "list<string> courseList;" << endl;
    cout << "courseList.push_back(\"CS221\");" << endl;
    cout << "courseList.push_back(\"CS222\");" << endl;
    cout << "s1.setCourses(courseList);" << endl;
    list<string> courseList;
    courseList.push_back("CS221");
    courseList.push_back("CS222");
    s1.setCourses(courseList);
    cout << "Courses: " << endl;;
    s1.printCourses();
    cout << "[Expected: CS221 CS222]" << endl;
    cout << endl;

    // Testing Remove Course
    cout << "s1.removeCourse(\"CS222\");" << endl;
    s1.removeCourse("CS222");
    cout << "Courses: ";
    s1.printCourses();
    cout << "[Expected: C221]" << endl;
    cout << endl;

    // Testing Clear Courses
    cout << "s1.clearCourses();" << endl;
    s1.clearCourses();
    cout << "Courses: ";
    s1.printCourses();
    cout << "[Expected: (none)]" << endl;
    cout << endl;

    // Testing Other Constructors
    cout << "--------------------------------" << endl;
    cout << "Testing Constructors:" << endl;
    cout << "--------------------------------" << endl
         << endl;
    ;

    // Copy Constructor
    cout << "Testing Copy Constructor" << endl;
    cout << "-------------------------" << endl;
    cout << "Student s2 = Student(s1);" << endl;
    Student s2 = Student(s1);
    cout << "Testing to see if it has most of the same data stored:" << endl;
    cout << "Admit Date: " << s2.getAdmitDate().tm_mday << ", "
         << s2.getAdmitDate().tm_mon << ", "
         << s2.getAdmitDate().tm_year << " [Expected: 1, 1, 118]" << endl;
    cout << "GPA: " << s2.getGPA() << " [Expected: 3.7]" << endl;
    cout << "Units Completed: " << s2.getUnitsCompleted() << " [Expected: 2.5]" << endl;
    cout << "Full Time Status: " << boolalpha << s2.isFullTime() << " [Expected: true]" << endl << endl;;
    cout << "Now going to change the GPA of s1" << endl;
    cout << "s1.setGPA(2.0);" << endl;
    s1.setGPA(2.0);
    cout << "s2 GPA (should be unchanged): " << s2.getGPA() << " [Expected: 3.7]" << endl << endl;;

    // Full Constructor
    cout << "Testing Full Constructor" << endl;
    cout << "-------------------------" << endl;
    cout << "Student s3 = Student(11111111, \"ab1cd\", \"Smith\", \"John\", 10, 4, 98, \"john.smith@richmond.edu\", \"1234 Main St\", 5551212, 2, 2, 2016, Student::AS, true, 3.5);" << endl;
    Student s3 = Student(11111111, "ab1cd", "Smith", "John", 10, 4, 98,
                         "john.smith@richmond.edu", "1234 Main St", 5551212, 2,
                         2, 2016, Student::AS, true, 3.5);
    cout << "Admit Date: " << s3.getAdmitDate().tm_mday << ", "
         << s3.getAdmitDate().tm_mon << ", "
         << s3.getAdmitDate().tm_year<< " [Expected: 2, 2, 116]" << endl;
    cout << "School: " << s3.getSchool() << " [Expected: 0]" << endl;
    cout << "GPA: " << s3.getGPA() << " [Expected: 0]" << endl;
    cout << "Units Completed: " << s3.getUnitsCompleted() << " [Expected: 3.5]" << endl;
    cout << "Full Time Status: " << boolalpha << s3.isFullTime() << " [Expected: true]" << endl;
    cout << "Courses: " << endl;
    s3.printCourses();
    cout << "Expected Courses: (none) " << endl;
    s1.printCourses();

    return 0;
}
