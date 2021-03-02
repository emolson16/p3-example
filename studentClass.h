#ifndef _STUDENTCLASS_H_
#define _STUDENTCLASS_H_

#include "gradeClass.h"

#include <fstream>
#include <string>
using namespace std;

class StudentClass
{
  private:
    string firstName;
    string lastName;
    GradeClass *grades; //A dynamically allocated 1-D array of grades
    int numGrades;
    

  public:
    StudentClass(string firstNameIn, string lastNameIn, int numGradesIn);

    bool initializeGrades(ifstream & inFile);

    double calculateAverage();

  
    
};

#endif 
