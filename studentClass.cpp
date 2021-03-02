#include "studentClass.h"

#include <iostream>
using namespace std;


// do all these funcitons in class probably (maybe not calculate average)
StudentClass::StudentClass(string firstNameIn, string lastNameIn, int numGradesIn) {
    firstName = firstNameIn;
    lastName = lastNameIn;
    numGrades = numGradesIn;

    grades = new GradeClass[numGrades];

}


bool StudentClass::initializeGrades(ifstream & inFile) {
    bool success = true;
    for(int i = 0; i < numGrades; ++i) {
        if(!grades[i].readFromFile(inFile)){
            success = false;
        }
    }
    return success;
}


double StudentClass::calculateAverage() {
    double sumGrades = 0;
    double sumMaxScore = 0;
    for(int i = 0; i < numGrades; ++i) {
        sumGrades += grades[i].getScore();
        sumMaxScore += grades[i].getMaxScore();
    }

    return sumGrades / sumMaxScore;
}