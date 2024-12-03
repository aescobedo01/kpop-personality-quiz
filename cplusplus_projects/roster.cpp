#include <iostream>
#include <sstream>
#include <string>
#include "roster.h"
#include "student.h"
#include "degree.h"
#ifndef ROSTER_H
#define ROSTER_H

using namespace std;

//numstudnts
Roster::Roster(int numStudents) {
this->numStudents = numStudents;
}

// destroyyyy
Roster::~Roster() {
    for (int i = 0; i <= lastIndex; ++i) {
        delete classRosterArray[i];
    }
}

string Roster::GetId(int index) {
    string studentId = classRosterArray[index]->getId();
    return studentId;
}


void Roster::parse(string studentData) { 
    string studentId, firstName, lastName, emailAddress;
    int yearsOld, daysCourse1, daysCourse2, daysCourse3;

    if (lastIndex < numStudents) {
        lastIndex++;

        //id
        int rhs = studentData[lastIndex].find(", ");
        classRosterArray[lastIndex]->setId(studentData[lastIndex].substr(0, rhs));

        //fname
        int lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        classRosterArray[lastIndex]->setFName(studentData[lastIndex].substr(lhs, rhs - lhs));

        //lname
        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        classRosterArray[lastIndex]->setLName(studentData[lastIndex].substr(lhs, rhs - lhs));

        //email
        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        classRosterArray[lastIndex]->setEmail(studentData[lastIndex].substr(lhs, rhs - lhs));

        //age
        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        classRosterArray[lastIndex]->setAge(studentData[lastIndex].substr(lhs, rhs - lhs));

        //days in each course
        //day 1
        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        daysCourse1 = stoi(studentData[lastIndex].substr(lhs, rhs - lhs));

        //day 2
        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        daysCourse2 = stoi(studentData[lastIndex].substr(lhs, rhs - lhs));

        //day3
        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        daysCourse3 = stoi(studentData[lastIndex].substr(lhs, rhs - lhs));
/////////////////////////////////////////////////////////////////////
        int days[] = {daysCourse1, daysCourse2, daysCourse3};
        classRosterArray[lastIndex]->setDays(days);
////////////////////////////////////////////////////////////////
        //degree
        lhs = rhs + 1;
        rhs = studentData.find(",", lhs);
        string type = studentData.substr(lhs, rhs - lhs);
        if (type == "Software") {
            classRosterArray[lastIndex]->setDegree(Software);
        }
        else if (type == "Security") {
            classRosterArray[lastIndex]->setDegree(Security);
        }
        else if (type == "Network"){
            classRosterArray[lastIndex]->setDegree(Network);
        }
        else {
            cout << "Degree does not exist" << endl;
        }
        lastIndex++;
    }
}


//little remove ststament
bool Roster::remove(string studentId){
    for (int i = 0; i <= lastIndex; ++i){
        if (classRosterArray[i]->getId() == studentId){
            delete classRosterArray[i];
            classRosterArray[i] = classRosterArray[lastIndex];
            lastIndex--;//roster down one element
            return true;
        }
    }
    cout << "Student not found: " << studentId << endl;
    return false;
}



void Roster::printAll() {
//parse student array and call print method for each one
for (int i = 0; i <= lastIndex; ++i)
classRosterArray[i]->print();
}




void Roster::add(string studentId, string firstName, string lastName, string emailAddress, int yearsOld, int daysCourse1, int daysCourse2, int daysCourse3, Degree degreeProgram) {
int days[] = {daysCourse1, daysCourse2, daysCourse3};
classRosterArray[++lastIndex] = new Student(studentId, firstName, lastName, emailAddress, yearsOld, days, degreeProgram);
};



//ave days
void Roster::printAverageDaysInCourse(string studentId) {
for (int i = 0; i <= lastIndex; ++i) {
    if (classRosterArray[i]->getId() == studentId) {
        int* days = classRosterArray[i]->getDays();
        cout << "Average days in a course for " << studentId << " is " << (days[0] + days[1] + days[2]) / 3 << endl;
        return;
    }
}
}



//inv email addresses
void Roster::printInvalidEmails() {
    cout << "Invalid emails: " << endl;
    for (int i = 0; i <= lastIndex; ++i) {
        string email = classRosterArray[i]->getEmail();
        if (email.find('@') == string::npos || email.find('.') == string::npos || email.find(' ') != string::npos) {
            cout << email << endl;
        }
}
}


//degreeeee
void Roster::printByDegreeProgram(Degree degreeProgram) {
    cout << "Degree programs: " << (degreeProgram == Security ? "Security" : (degreeProgram == Network ? "Network" : "Software")) << " program:" << endl;
    for (int i = 0; i <= lastIndex; ++i) {
        if (ClassRosterArray[i]->getDegree() == degreeProgram) {
            classRosterArray[i]->print();
    }
}
}












Roster::Roster()
{
    // initialization
    Student students[5];
    Student *classRosterArray[5];

    // array of student objects [NECESSARY]
    Student students[5] = {
        {"A1", "John", "Smith", "John1989@gm ail.com", 20, {30, 35, 40}, "SECURITY"},
        {"A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, {50, 30, 40}, "NETWORK"},
        {"A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, {20, 40, 33}, "SOFTWARE"},
        {"A4", "Erin", "Black", "Erin.black@comcast.net", 22, {50, 58, 40}, "SECURITY"},
        {"A5", "Ana", "Escobedo", "myemailaddress@gmail.com", 23, {20, 21, 22}, "SOFTWARE"}};

    // populate array w array of student objects [NECESSARY]
    for (int i = 0; i <= 5; i++)
    {
        classRosterArray[i] = &students[i];
    }

    // print valUEs w pointers [NECESSARY]
    for (int i = 0; i <= 5; i++)
    {
        cout << classRosterArray[i]->getId() << ", ";
        cout << classRosterArray[i]->getFName() << ", ";
        cout << classRosterArray[i]->getLName() << ", ";
        cout << classRosterArray[i]->getEmail() << ", ";
        cout << classRosterArray[i]->getDays()[0] << ", ";
        cout << classRosterArray[i]->getDays()[1] << ", ";
        cout << classRosterArray[i]->getDays()[2] << ", ";
        cout << classRosterArray[i]->getDegree() << endl;
    }
}

#endif