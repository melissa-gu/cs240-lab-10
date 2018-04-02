#include "Student.h"

// Constructors
Student::Student() : Person() {}

Student::Student(const Student& other) : Person(other) {}

Student::Student(int urid, std::string netid, std::string lname, std::string fname,
        int dob_day, int dob_mo, int dob_yr,
        std::string email, std::string address, long phone,
        int day_admit, int month_admit, int year_admit,
        School school, bool is_full_time,
        double units_completed) : Person(urid, netid, lname, fname,
                                         dob_day, dob_mo, dob_yr,
                                         email, address, phone) 
{

}

Student::~Student() {}

// Methods
std::list<std::string> Student::getCourses()
{
    std::list<std::string> list;
    return list;
}
void Student::addCourse(std::string course) {}
void Student::removeCourse(std::string course) {}
void Student::printCourses() {}
void Student::setCourses(std::list<std::string> courses) {}
void Student::clearCourses() {}

struct tm Student::getAdmitDate(){
    struct tm admitDate;
    return admitDate;
}
Student::School Student::getSchool(){
    Student::School schoolName = Student::AS;
    return  schoolName;
}
double Student::getGPA(){
    return 0.0;
}
double Student::getUnitsCompleted()
{
    return 0.0;
}
bool Student::isFullTime()
{
    return false;
}

