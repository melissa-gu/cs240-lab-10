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

    cout << "Testing Constructors:" << endl;
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

    cout << "Testing setters/getters:" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Student s;" << endl;
    Student s;
    cout << "p.setFirstName(\"Lilly\")" << endl;
    p.setFirstName("Lilly");
    cout << "First Name: " << p.getFirstName() << "[Expected: Lilly]" << endl;

    return 0;
}
