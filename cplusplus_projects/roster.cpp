#include <iostream>
#include <string>
#include "roster.h"
#include "student.h"
#include "degree.h"

using namespace std;

class Roster{

Roster() {
//array of size 5
string* classRosterArray = new string[5];

//initialize array
for (int i = 0; i < 5; i++) {
    classRosterArray[i] = 10 * (i + 1);
}

//print vals w pointers
    cout << *classRosterArray << endl;
    cout << *classRosterArray + 1 << endl;
    cout << *(classRosterArray + 1) << endl;
    cout << 2 [classRosterArray] << endl;
    cout << classRosterArray[2] << endl;
    *classRosterArray++;

    //point to nxt location
    cout << *classRosterArray;
}

};