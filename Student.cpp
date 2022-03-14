#include "Student.h"
#include <iostream>
#include <string.h>
using namespace std;
// Assign studentId and name

void Student::assignDetails(int id, char sName[]) //need to mention the class
{
  studentId = id;
  strcpy(name, sName);
}


// Display StudentId and Name
void Student::display() 
{
  cout << "Student Id is  " << studentId;
  cout << "Student Name is " << name;
}
