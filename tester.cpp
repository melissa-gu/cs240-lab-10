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

    cout << "Testing setters/getters:" << endl;
    cout << "-----------------------------------------------------" << endl;
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

    

    cout << "s1.setFirstName(\"Lilly\")" << endl;
    s1.setFirstName("Lilly");
    cout << "First Name: " << s1.getFirstName() << "[Expected: Lilly]" << endl;

    return 0;
}
