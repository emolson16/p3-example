#ifndef _GRADECLASS_H_
#define _GRADECLASS_H_

#include <fstream>
#include <string>
using namespace std;

class GradeClass
{
  private:
    string title;
    int score;
    int maxScore;

  public:

    GradeClass();
    
    GradeClass(string titleIn, int scoreIn, int maxScoreIn);

    void changeScore(int newScore);

    bool readFromFile(ifstream &inFile);

    int getScore();

    int getMaxScore();



};

#endif //_GRADECLASS_H_
