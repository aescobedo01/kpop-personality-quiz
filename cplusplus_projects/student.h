#include <iostream>
#include <string>
#include "degree.h"
#include "roster.h"
#ifndef STUDENT_H
#define STUDENT_H

using namespace std;
//student class in h file
class Student{
    
protected:
    string studentId;
    string lastName;
    string firstName;
    string emailAddress;
    int yearsOld;
    int daysCourse[3];
    Degree degreeProgram;
public: 

//default student constructor
    Student();

//student constructor
    Student(string studentid, string firstname, string lastname, string email, int age, int days[], Degree degree);

//destructor
Student::~Student();

//declare setters
void setId(string& studentID);
void setFName(string& firstName);
void setLName(string& lastName);
void setEmail(string& emailAddress);
void setAge(int& yearsOld);
void setDays(int& daysCourse);
void setDegree(Degree degreeProgram);

//dec getters
string getId();
string getFName();
string getLName();
string getEmail();
int getAge();
int* getDays();
virtual Degree getDegree() const; //= 0;

//print
virtual void print() const;
    
};

#endif 