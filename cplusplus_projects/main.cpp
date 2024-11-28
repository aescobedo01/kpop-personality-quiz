#include <iostream>
#include <string>
#include <array>
#include "roster.h"
#include "degree.h"
#include "student.h"

using namespace std;

int main() {

// Print out to the screen, via your application, the course title, 
//the programming language used, your WGU student ID, and your name.
cout << "C867: Scripting & Programming - Applications" << endl;
cout << "C++" << endl;
cout << "012203109" << endl;
cout << "Ana Escobedo" << endl;

const std::string studentData[] = {
"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", 
"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", 
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", 
"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", 
"A5,Ana,Escobedo,myemailaddress@gmail.com,23,20,21,22,SOFTWARE"
};

Roster* classRoster = new Roster(5);

for (int i = 0; i < 5; i++) {
    classRoster->parse(studentData[i]);
}
classRoster->printAll();
classRoster->printInvalidEmails();

//loop through classRosterArray and for each element:
for (int i = 0; i < 5; i++){
classRoster->printAverageDaysInCourse(classRoster->GetId(i));
}
classRoster->printByDegreeProgram(Software);
classRoster->remove("A3");
classRoster->printAll();
cout << "Student with this ID was not found: " << endl;
classRoster->remove("A3");
//expected: the above line should print a message saying such a student with this ID was not found.

classRoster->~Roster();
delete classRoster;

system("pause>0");
return 0;
}
