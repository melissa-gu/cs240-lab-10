#include "Student.h"

// Constructors
Student::Student() {}

Student::Student(const Student& other) {}

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

// Methods
std::list<std::string> getCourses() {
    std::list<std::string> list;
    return list;
}
void addCourse(std::string course) {}
void removeCourse(std::string course) {}
void printCourses(){}
void setCourses(std::list<std::string> courses){}
void clearCourses(){}

struct tm getAdmitDate(){
    struct tm admitDate;
    return admitDate;
}
Student::School getSchool(){
    Student::School schoolName = Student::AS;
    return  schoolName;
}
double getGPA(){
    return 0.0;
}
double getUnitsCompleted(){
    return 0.0;
}
bool isFullTime(){
    return false;
}

