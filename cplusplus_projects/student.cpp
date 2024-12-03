#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
#include "roster.h"
#ifndef STUDENT_H
#define STUDENT_H

using namespace std;

Student::Student() {}
//default student constructor

//student constructor
    Student::Student(string studentid, string firstname, string lastname, string email, int age, int days[], Degree degree) {
        this->studentId = studentid;
        this->firstName = firstname;
        this->lastName = lastname;
        this->emailAddress = email;
        this->yearsOld = age;
        for (int i = 0; i < 3; ++i){
        this->daysCourse[i] = days[i];
    }
        this->degreeProgram = degree;
    }

//destroy
    Student::~Student() {};

    //mutators or setters
    void Student::setId(const string& studentId){
        this->studentId = studentId;
    }
    void Student::setFName(const string& firstName){
        this->firstName = firstName;
    }

    void Student::setLName(const string& lastName){
        this->lastName = lastName;
    }
    void Student::setEmail(const string& emailAddress){
        this->emailAddress = emailAddress;
    }
    void Student::setAge(const int& yearsOld){
        this->yearsOld = yearsOld;
    }

    void Student::setDays(int days[]){
        for (int i = 0; i < 3; i++){
            this->daysCourse[i] = days[i];
        }
    }

    virtual Student::setDegree(const Degree degreeProgram) {
        this->degreeProgram = degreeProgram;
    }

//accessors or getters
    string Student::getId() const {
        return studentId;
    }

    string Student::getFName() const {
        return firstName;
    }
    
    string Student::getLName() const {
        return lastName;
    }

    string Student::getEmail() const {
        return emailAddress;
    }

    int Student::getAge() const {
        return yearsOld;
    }

    int* Student::getDays() const {
        return daysCourse;
    }

    virtual Degree Student::getDegree() const {
        return degreeProgram;
    }

//print everything
void Student::print() const {
    string myDegree;
    if (degreeProgram == Security) {
        myDegree = "Security";
        break;
    }
      else if (degreeProgram == Software) {
        myDegree = "Software";
        break;
    }
      else if (degreeProgram == Network) {
        myDegree = "Network";
        break;
    }
    else {
        myDegree = "Error";
    }

    cout << "ID: " << getId()
    << "\tFirst Name: " << getFName()
    << "\tLast Name: " << getLName()
    << "\tE-mail: " << getEmail()
    << "\tAge: " << getAge()
    << "\tDays in Course: {" << daysCourse[0] << ", " << daysCourse[1] << ", " << daysCourse[2] << "}"
    << "\tDegree: " << getDegree()
    << endl;

    return;
}

#endif