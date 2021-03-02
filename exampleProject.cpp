#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "gradeClass.h"
#include "studentClass.h"

int main() {

  bool validFile = false;
  string fileName;
  ifstream inFile;
  string firstName;
  string lastName;
  int numGrades;
  bool success = true;

  // do this in class

  do
  {
    cout << "Enter a filename with student info: ";
    cin >> fileName;

    if (!cin) {
      cout << "Invalid name entered" << endl;
      cin.clear();

    } else {
      inFile.open(fileName.c_str());

      if (!inFile) {
        cout << "Error: Unable to open input file: " << fileName << endl;
      } else {
        validFile = true;
      }

    }
    cin.ignore(200, '\n'); 
  } while (!validFile);


  if(success) {
    inFile >> firstName >> lastName;

    if(!inFile) {
      success = false;
      cout << "Invalid file format" << endl;
    }

  }

  if(success) {
    inFile >> numGrades;

    if(!inFile) {
      success = false;
      cout << "Invalid file format" << endl;
    }
  }

  StudentClass student(firstName, lastName, numGrades);

  student.initializeGrades(inFile);


  cout << "Student average is " << student.calculateAverage()*100 << "%" << endl;

  
}
