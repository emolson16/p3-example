#include "gradeClass.h"

#include <iostream>
using namespace std;

GradeClass::GradeClass() {
  title = "";
  score = 0;
  maxScore = 0;
}


GradeClass::GradeClass(string titleIn, int scoreIn, int maxScoreIn) {
    title = titleIn;
    score = scoreIn;
    maxScore = maxScoreIn;
}

void GradeClass::changeScore(int newScore) {
    score = newScore;
}

// do this function in class
bool GradeClass::readFromFile(ifstream &inFile) {
  bool success = true;
  string titleIn;
  int scoreIn;
  int maxScoreIn;

  success = true;

  inFile >> titleIn >> scoreIn >> maxScoreIn;

  if (!inFile) {
    cout << "Error: Reading color from file" << endl;
    success = false;
  } else {
    title = titleIn; 
    score = scoreIn;
    maxScore = maxScoreIn;
  }
  
  return success;
}

int GradeClass::getScore() {
  return score;
}

int GradeClass::getMaxScore() {
  return maxScore;
}
