// Mason Currie
// 4/1/2018
//
// This code declares a class named Question.




#include <iostream>

using namespace std;

class Question{
private:
  string stem;
  string answers[4];
  char key;

public:
  void setStem(string);
  void setAnswers(string []);
  void setKey(char);
  string getStem();
  string getAnswers(int i);
  char getKey();
  void display();

  Question();
  Question(string, string [], char);

};
