// Programmers: Melissa Gu and Trevor LeForge
#include "Student.h"
#include <iostream>

// ----------------Constructors----------------
Student::Student() : Person() 
{
    admitDate.tm_mday = 0;
    admitDate.tm_mon = 0;
    admitDate.tm_year = 0;
    GPA = 0.0;
    school = Student::AS;
    is_full_time = true;
    units_completed = 0;
}

Student::Student(const Student& other) : Person(other) 
{
    this->admitDate.tm_mday = other.admitDate.tm_mday;
    this->admitDate.tm_mon = other.admitDate.tm_mon;
    this->admitDate.tm_year = other.admitDate.tm_year;
    this->GPA = other.GPA;
    this->school = other.school;
    this->is_full_time = other.is_full_time;
    this->units_completed = other.units_completed;
    courses = other.courses;
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
    this->admitDate.tm_year = year_admit - 1900;
    this->school = school;
    this->is_full_time = is_full_time;
    this->units_completed = units_completed;
}

Student::~Student() {} // Destructor

// ----------------Methods----------------
// Courses
std::list<std::string> Student::getCourses()
{
    return courses;
}
void Student::addCourse(std::string course) 
{
    courses.push_back(course);
}
void Student::removeCourse(std::string course) 
{
    courses.remove(course);
}
void Student::printCourses() 
{
    std::list<std::string>::iterator it;
    for (it = courses.begin(); it != courses.end(); it++)
    {
        std::cout << *it << " ";
    }
}
void Student::setCourses(std::list<std::string> courses) 
{
    this->courses.swap(courses);
}
void Student::clearCourses() 
{
    courses.clear();
}

// Getters
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
    return GPA;
}
double Student::getUnitsCompleted()
{
    return units_completed;
}
bool Student::isFullTime()
{
    return is_full_time;
}

// Setters
void Student::setAdmitDate(int day, int month, int year) 
{
    admitDate.tm_mday = day;
    admitDate.tm_mon = month;
    admitDate.tm_year = year-1900;
}

void Student::setSchool(School school)
{
    this->school = school;
}

void Student::setGPA(double gpa)
{
    this->GPA = gpa;
}

void Student::setUnitsCompleted(double units)
{
    units_completed = units;
}

void Student::setFullTimeStatus(bool isFullTime)
{
    is_full_time = isFullTime;
}
