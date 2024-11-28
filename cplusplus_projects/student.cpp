#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
#include "roster.h"
#ifndef STUDENT_H
#define STUDENT_H

using namespace std;

//constructor goes here.

Student::Student() {
//default student constructor
    Student();

//student constructor
    Student::Student(string studentid, string firstname, string lastname, string email, int age, int daysCourse[], Degree degree) {
        setStudentId(studentId);
        setFName(firstName);
        setLName(lastName);
        setEmail(emailAddress);
        setAge(yearsOld);
        setDays(daysCourse[3]);
        for (int i = 0; i <=3; ++i){
        this->daysCourse[i] = days[i];
    }
        setDegree(degreeProgram);
    }

    //mutators or setters
    void setId(const string& studentId){
        this->studentId = studentId;
        return;
    }
    void setFName(const string& firstName){
        this->firstName = firstName;
    }

    void setLName(const string& lastName){
        this->lastName = lastName;
    }
    void setEmail(const string& emailAddress){
        this->emailAddress = emailAddress;
    }
    void setAge(const int& yearsOld){
        this->yearsOld = yearsOld;
    }
     void setDays(int daysCourse1, int daysCourse2, int daysCourse3){
        for (int i = 0; i < 3; i++){
            *this->daysCourse[0] = daysCourse1;
            *this->daysCourse[1] = daysCourse1;
            *this->daysCourse[2] = daysCourse1;
        }
    }
    virtual void setDegree(const Degree d); // = 0?

//accessors or getters
    string getId() const {
        return studentId;
    }

    string getFName() const {
        return firstName;
    }
    
    string getLName() const {
        return lastName;
    }

    string getEmail() const {
        return emailAddress;
    }

    int getAge() const {
        return yearsOld;
    }

    int* getDays() {
        return daysCourse;
    }

    virtual Degree getDegree() const; //= 0;

//print everything
void Student::print() {
    string myDegree;
    if (degreeProgram == Security) {
        myDegree = "Security";
    }
      else if (degreeProgram == Software) {
        myDegree = "Software";
    }
      else if (degreeProgram == Network) {
        myDegree = "Network";
    }
    else {
        myDegree = "Error";
    }

    cout << studentId
    << "First Name: " << getFName()
    << "Last Name: " << getLName()
    << "E-mail: " << getEmail()
    << "Age: " << getAge()
    << "Days in Course: " << getDays()[0] << ", " << getDays()[1] << ", " << getDays()[2]
    << "Degree: " << myDegree << endl;

    return;
}


//destructor
Student::~Student();
};

#endif
