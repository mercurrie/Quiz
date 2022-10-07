// Mason Currie
// 4/1/2018
//
// This code creates an array of 5 objects and ouputs those 5 objects using
// the display function.




#include "Question.h"
#include <iomanip>
#include <iostream>

using namespace std;

int main ()
{
  const int SIZE = 5;
  Question quiz[SIZE];

  Question q1,q2,q3,q4,q5;


q1.setStem("What name is given to half of a Byte (4 bits)?");
string q1Answers [] = {"Nibble","Ort","Scrap","Snippet"}; //answer A
q1.setAnswers(q1Answers);
q1.setKey('A');
quiz[0] = q1;

q2.setStem("Which country is home to the Kangaroo?");
string q2Answers [] = {"China","India","Mexico","Australia"}; //answer D
q2.setAnswers(q2Answers);
q2.setKey('D');
quiz[1] = q2;

q3.setStem("What do you use to measure an angle?");
string q3Answers [] = {"Compass","Protractor","Ruler","T-Square"}; //ans B
q3.setAnswers(q3Answers);
q3.setKey('B');
quiz[2] = q3;

q4.setStem ("The Great Sphinx has the head of a human and the body of a what?");
string q4Answers [] = {"Camel","Eagle","Lion","Alligator"}; //answer C
q4.setAnswers(q4Answers);
q4.setKey('C');
quiz[3] = q4;

q5.setStem("What is the flat rubber disc used in a game of ice hockey?");
string q5Answers [] = {"Birdie","Puck","Dart","Tile"}; //answer B
q5.setAnswers(q5Answers);
q5.setKey('B');
quiz[4] = q5;

for(int i = 0; i < SIZE; i++)
 {
   quiz[i].display();
   cout << endl;
 }

cout << "Answers:" << endl;

for(int i = 0; i < SIZE; i++)
{
  cout << quiz[i].getKey() << " ";
}
cout << endl;
  return 0;
}
