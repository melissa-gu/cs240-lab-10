// Programmers: Melissa Gu and Trevor LeForge
#include "Student.h"

// Constructors
Student::Student() : Person() 
{
    admitDate.tm_mday = 0;
    admitDate.tm_mon = 0;
    admitDate.tm_year = 0;
    school = Student::AS;
    is_full_time = true;
    units_completed = 0;
}

Student::Student(const Student& other) : Person(other) 
{
    this->admitDate.tm_mday = other.admitDate.tm_mday;
    this->admitDate.tm_mon = other.admitDate.tm_mon;
    this->admitDate.tm_year = other.admitDate.tm_year;
    this->school = other.school;
    this->is_full_time = other.is_full_time;
    this->units_completed = other.units_completed;
}

Student::Student(int urid, std::string netid, std::string lname, std::string fname,
        int dob_day, int dob_mo, int dob_yr,
        std::string email, std::string address, long phone,
        int day_admit, int month_admit, int year_admit,
        School school, bool is_full_time,
        double units_completed) : Person(urid, netid, lname, fname,
                                         dob_day, dob_mo, dob_yr,
                                         email, address, phone) 
{
    this->admitDate.tm_mday = day_admit;
    this->admitDate.tm_mon = month_admit;
    this->admitDate.tm_year = year_admit;
    this->school = school;
    this->is_full_time = is_full_time;
    this->units_completed = units_completed;
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

struct tm Student::getAdmitDate()
{
    return admitDate;
}
Student::School Student::getSchool()
{
    return school;
}
double Student::getGPA()
{
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

// Setters
void Student::setAdmitDate(int day, int month, int year) 
{
    admitDate.tm_mday = day;
    admitDate.tm_mon = month;
    admitDate.tm_year = year;
}

void Student::setSchool(School school)
{
    this->school = school;
}

void Student::setGPA(double gpa)
{

}

void Student::setUnitsCompleted(double units)
{

}

void Student::setFullTimeStatus(bool isFullTime)
{

}
