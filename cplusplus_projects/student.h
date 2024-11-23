#include <iostream>
#include <string>
#include "degree.h"
#ifndef STUDENT_H
#define STUDENT_H

using namespace std;

class Student{

//maybe make the variables priv?
private:
    string studentId;
    string lastName;
    string firstName;
    string emailAddress;
    int yearsOld;
    int daysCourse[3];
    string degreeProgram;


public:
//default student constructor
    Student();
//student constructor
    Student(string studentid, string firstname, string lastname, string email, int age, int day1, int day2, int day3, string degree) {
        setStudentId(studentId);
        setFName(firstName);
        setLName(lastName);
        setEmail(emailAddress);
        setAge(yearsOld);
        setDays(daysCourse[3]);
        setDegree(degreeProgram);
        //maybe add the array in here?
        //numDaysArray = myarray;
    }
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

    string getDegree() const {
        return degreeProgram;
    }

    //mutators or setters
    void setStudentId(const string& studentId){
        this->studentId = studentId;
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
     void setDays(int& daysCourse){
        *this->daysCourse = daysCourse;
    }
    void setDegree(const string& degreeProgram){
        this->degreeProgram = degreeProgram;
    }


//print
void print() const;

};

#endif //for studenth