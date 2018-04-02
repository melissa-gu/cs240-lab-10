// Programmers: Melissa
#ifndef __PERSON_CPP__
#define __PERSON_CPP__

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

//-----------------------------------------------------------------------------
// beginning of getters and setters
//-----------------------------------------------------------------------------
//
// Return a Person's First Name
std::string Person::getFirstName() {
    return "";
}

// Return a Person's Last Name
std::string getLastName() {
    return "";
}

// Return a Person's Date of Birth
struct tm getDateOfBirth() {
    struct tm dob;
    return dob;
}

// Return a Person's Address
std::string getAddress() {
    return "";
}

// Return the NetID
std::string getNetID() {
    return "";
}

// Return URID
int getURID() {
    return 0;
}

// Return Email
std::string getEmail() {
    return "";
}

// Return Phone Number
long getPhone() {
    return 0;
}

// set the first name
void setFirstName(std::string fname) {
}

// set the last name
void setLastName(std::string lname) {
}

// set the date of birth
void setDateOfBirth(int day, int month, int year) {
}

// set the Address
void setAddress(std::string address) {
}

// set the NetID
void setNetID(std::string netid) {
}

// set the URID
void setURID(int urid) {
}

// set the Email
void setEmail(std::string email) {
}

// set the phone number
void setPhone(long number) {
}

#endif
