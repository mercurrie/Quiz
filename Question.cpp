// Mason Currie
// 4/1/2018
//
// This code takes the class Question and initializes the functions in it.


#include "Question.h"
#include <iostream>
#include <iomanip>

using namespace std;
//setStem() sets stem equal to the string passed to the function
void Question :: setStem(string s)
{
  stem = s;
}
//setAnswers() sets the array answers equal to the array passed to the function
void Question :: setAnswers(string a[])
{
  for( int i = 0; i < 4; i++)
  {
    answers[i] = a[i];
  }
}
//setKey() sets key equal to the character passed to the function
void Question :: setKey(char k)
{
  key = k;
}
//getStem() returns stem
string Question :: getStem()
{
  return stem;
}
//getAnswers() returns the array answers
string Question :: getAnswers(int i)
{
  return answers[i];
}
//getKey() returns key
char Question :: getKey()
{
  return key;
}

Question :: Question()
{
  stem = "hi";
  key = 'A';

  for( int i = 0; i < 4; i++)
  {
    answers[i] = 'h';
  }

}

Question :: Question(string s, string a[], char k)
{
  stem = s;
  key = k;

  for(int i = 0; i < 4; i++)
  {
    answers[i] = a[i];
  }
}
//display() prints data to the screen
void Question :: display()
{
    cout << stem << endl;
    cout << "A. " << answers[0] << endl;
    cout << "B. " << answers[1] << endl;
    cout << "C. " << answers[2] << endl;
    cout << "D. " << answers[3] << endl;


}
