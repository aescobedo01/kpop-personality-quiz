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
    Student(string studentid, string firstname, string lastname, string email, int age, int days[], string degree) {
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
};

#endif 
