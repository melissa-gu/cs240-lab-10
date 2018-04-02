#include <string>
#include <ctime>
#include "Person.h"


//-----------------------------------------------------------------------------
// beginning of constructors
//-----------------------------------------------------------------------------
//
// Default Constructor
Person::Person() {

}

// Constructor that takes in another instance of Person as the parameter
Person::Person(const Person& other) {
}

// Constructor that needs alllllllll of the information upfront
Person::Person(int urid, std::string netid, std::string lname, std::string
fname, int dob_day, int dob_month, int dob_year, std::string email,
std::string address, long phone) {
}

// Deconstructor
Person::~Person() {}

//-----------------------------------------------------------------------------
// beginning of getters and setters
//-----------------------------------------------------------------------------
//
// Return a Person's First Name
std::string Person::getFirstName()
{
    return "";
}

// Return a Person's Last Name
std::string Person::getLastName()
{
    return "";
}

// Return a Person's Date of Birth
struct tm Person::getDateOfBirth()
{
    struct tm dob;
    return dob;
}

// Return a Person's Address
std::string Person::getAddress()
{
    return "";
}

// Return the NetID
std::string Person::getNetID()
{
    return "";
}

// Return URID
int Person::getURID()
{
    return 0;
}

// Return Email
std::string Person::getEmail()
{
    return "";
}

// Return Phone Number
long Person::getPhone()
{
    return 0;
}

// set the first name
void Person::setFirstName(std::string fname)
{
}

// set the last name
void Person::setLastName(std::string lname)
{
}

// set the date of birth
void Person::setDateOfBirth(int day, int month, int year)
{
}

// set the Address
void Person::setAddress(std::string address)
{
}

// set the NetID
void Person::setNetID(std::string netid)
{
}

// set the URID
void Person::setURID(int urid)
{
}

// set the Email
void Person::setEmail(std::string email)
{
}

// set the phone number
void Person::setPhone(long number)
{
}


