//Pulling in any library that I might need over the course of the program. iostream handles input and output, and also has most of the math related things you might need.
#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <compare>
#include <memory>
#include <any>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {

//Dummy variable used so the program doesn't instantly close after the main block of code has finished executing.
int Exit = 0;

//Variables used for the responses to every question.
int QuestionOneResponse = 0;
int QuestionTwoResponse = 0;
int QuestionThreeResponse = 0;

//Variables used for the answers that are actually correct.
int QuestionOneCorrectAnswer = 0;
int QuestionTwoCorrectAnswer = 0;
int QuestionThreeCorrectAnswer = 0;

//Names of every section in strings.
string FirstSection = "Section 1: Simple Addition.";
string SecondSection = "Section 2: Simple Subtraction.";
string ThirdSection = "Section 3: Simple Multiplication.";


string CorrectAnswer = "You got the answer correct!";
string IncorrectAnswer = "You got the answer wrong. Please try again.";


//Questions put into strings for a second attempt if need be.
string QuestionOneRetry = "What is (1 + 1)?";
string QuestionTwoRetry = "What is (2 + 2)?";
string QuestionThreeRetry = "What is (9 + 9)?";


string QuestionOne = "Question 1: ";
string QuestionTwo = "Question 2: ";

























cout << QuestionOne << "What is (1 + 1)" << "?" << endl;
cin >> QuestionOneResponse;

QuestionOneCorrectAnswer = 2;

if (QuestionOneResponse == QuestionOneCorrectAnswer) {
cout << CorrectAnswer << endl;
} else {
cout << IncorrectAnswer << endl;
cout << QuestionOneRetry << endl;
cin >> QuestionOneResponse;
}

cout << QuestionTwo << "What is (2 + 2)" << "?" << endl;
cin >> QuestionTwoResponse;

QuestionTwoCorrectAnswer = 4;

if (QuestionTwoResponse == QuestionTwoCorrectAnswer) {
cout << CorrectAnswer << endl;
} else {
cout << IncorrectAnswer << endl;
cout << QuestionTwoRetry << endl;
cin >> QuestionTwoResponse;
}

cout << "What is (9 + 9)" << "?" << endl;
cin >> QuestionThreeResponse;

QuestionThreeCorrectAnswer = 18;

if (QuestionThreeResponse == QuestionThreeCorrectAnswer) {
cout << CorrectAnswer << endl;
} else {
cout << IncorrectAnswer << endl;
cout << QuestionThreeRetry << endl;
cin >> QuestionThreeResponse;
}



























cin >> Exit;
return 0;
}
