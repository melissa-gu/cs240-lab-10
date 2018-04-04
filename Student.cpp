// Programmers: Melissa Gu and Trevor LeForge
#include "Student.h"

// Constructors
Student::Student() : Person() 
{
    day_admit = 0;
    month_admit = 0;
    year_admit = 0;
    school = Student::AS;
    is_full_time = true;
    units_completed = 0;
}

Student::Student(const Student& other) : Person(other) 
{
    this->day_admit = other.day_admit;
    this->month_admit = other.month_admit;
    this->year_admit = other.year_admit;
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
    this->day_admit = day_admit;
    this->month_admit = month_admit;
    this->year_admit = year_admit;
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
    struct tm admitDate;
    return admitDate;
}
Student::School Student::getSchool()
{
    Student::School schoolName = Student::AS;
    return  schoolName;
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

