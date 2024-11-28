#ifndef ROSTER_H
#define ROSTER_H
#include "student.h"
#include "degree.h"
#include <string>
#include <array>
#include <iostream>

using namespace std;
//helloooo
class Roster {
public:
Student* classRosterArray[5];
Roster(int numStudents);

//define funcs
Roster();
~Roster();
string GetId(int index);
void parse (string studentData);
void remove(string studentId);
void printAll();
void add(string studentId, string firstName, string lastName, string emailAddress, int yearsOld, int daysCourse1, int daysCourse2, int daysCourse3, Degree degreeProgram);
void printAverageDaysInCourse(string studentId);
void printInvalidEmails();
void printByDegreeProgram(Degree degreeProgram);
int numStudents;
int ind;

Roster::~Roster();
};
#endif