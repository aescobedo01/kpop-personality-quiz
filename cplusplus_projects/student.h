#include <iostream>
using namespace std;

class Student{
public:
    int studentId;
    string lastName;
    string firstName;
    string emailAddress;
    int yearsOld;
    string degreeProgram;

    double numDaysArray[5][3] {
    {30, 35, 40},
    {50, 30, 40},
    {20, 40, 33},
    {50, 58, 40},
    {20, 21, 22}
    };
};