// Programmers: Melissa Gu and Trevor LeForge

#include <string>
#include <ctime>
#include "Person.h"


//-----------------------------------------------------------------------------
// beginning of constructors
//-----------------------------------------------------------------------------
//
// Default Constructor
Person::Person() {
    urid = 00000000;
    netid = " ";
    lname = " ";
    fname = " ";
    dob_day = 0;
    dob_month = 0;
    dob_year = 0;
    email = " ";
    address = " ";
    phone = 0000000000;
    dob.tm_mday = 0;
    dob.tm_mon  = 0;
    dob.tm_year = 0;
}

// Constructor that takes in another instance of Person as the parameter
Person::Person(const Person& other) {
    urid = other.urid;
    netid = other.netid;
    lname = other.lname;
    fname = other.fname;
    dob_day = other.dob_day;
    dob_month = other.dob_month;
    dob_year = other.dob_year;
    email = other.email;
    address = other.address;
    phone = other.phone;
    dob.tm_mday = dob_day;
    dob.tm_mon  = dob_month;
    dob.tm_year = dob_year;
}

// Constructor that needs alllllllll of the information upfront
Person::Person(int urid, std::string netid, std::string lname, std::string
fname, int dob_day, int dob_month, int dob_year, std::string email,
std::string address, long phone) {
    this->urid = urid;
    this->netid = netid;
    this->lname = lname;
    this->fname = fname;
    this->dob_day = dob_day;
    this->dob_month = dob_month;
    this->dob_year = dob_year;
    this->email = email;
    this->address = address;
    this->phone = phone;
    dob.tm_mday = dob_day;
    dob.tm_mon  = dob_month;
    dob.tm_year = dob_year - 1900;
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
    return fname;
}

// Return a Person's Last Name
std::string Person::getLastName()
{
    return lname;
}

// Return a Person's Date of Birth
struct tm Person::getDateOfBirth()
{
    return dob;
}

// Return a Person's Address
std::string Person::getAddress()
{
    return address;
}

// Return the NetID
std::string Person::getNetID()
{
    return netid;
}

// Return URID
int Person::getURID()
{
    return urid;
}

// Return Email
std::string Person::getEmail()
{
    return email;
}

// Return Phone Number
long Person::getPhone()
{
    return phone;
}

// set the first name
void Person::setFirstName(std::string fname)
{
    this->fname = fname;
}

// set the last name
void Person::setLastName(std::string lname)
{
    this->lname = lname;
}

// set the date of birth
void Person::setDateOfBirth(int day, int month, int year)
{
    dob_day = day;
    dob_month = month;
    dob_year = year - 1900;
    dob.tm_mday = dob_day;
    dob.tm_mon  = dob_month;
    dob.tm_year = dob_year;
}

// set the Address
void Person::setAddress(std::string address)
{
    this->address = address;
}

// set the NetID
void Person::setNetID(std::string netid)
{
    this->netid = netid;
}

// set the URID
void Person::setURID(int urid)
{
    this->urid = urid;
}

// set the Email
void Person::setEmail(std::string email)
{
    this->email = email;
}

// set the phone number
void Person::setPhone(long number)
{
    phone = number;
}


