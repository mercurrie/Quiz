// Mason Currie
//
// Driver to test the Question class.

#include <iostream>
#include <iomanip>
using namespace std;

#include "Question.h"

int main()
{
    Question q1;
    q1.setStem("What name is given to half of a Byte (4 bits)?");
    string q1Answers [] = {"Nibble","Ort","Scrap","Snippet"};
    q1.setAnswers(q1Answers);
    q1.setKey('A');

    cout<< "q1 stem: " << q1.getStem() << endl;
    cout<< "q1 first answer: " << q1.getAnswers(0) << endl;
    cout<< "q1 last answer: " << q1.getAnswers(3) << endl;
    cout <<"q1 correct answer: " << q1.getKey() << endl;
    cout << endl;
    string q2Answers [] = {"China","India","Mexico","Australia"};
    Question q2("Which country is home to the Kangaroo?",q2Answers,'D');

    //q2.display();
    cout << endl;
}
/* Expected output:

 q1 stem: What name is given to half of a Byte (4 bits)?
 q1 first answer: Nibble
 q1 last answer: Snippet
 q1 correct answer: A

 Which country is home to the Kangaroo?
 A. China
 B. India
 C. Mexico
 D. Australia

 */
