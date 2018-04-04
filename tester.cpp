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
    cout << "Student s;" << endl;
    Student s;
    cout << "p.setFirstName(\"Lilly\")" << endl;
    p.setFirstName("Lilly");
    cout << "First Name: " << p.getFirstName() << "[Expected: Lilly]" << endl;

    return 0;
}
