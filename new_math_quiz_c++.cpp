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
int QuestionFourResponse = 0;
int QuestionFiveResponse = 0;
int QuestionSixResponse = 0;
int QuestionSevenResponse = 0;
int QuestionEightResponse = 0;
int QuestionNineResponse = 0;
int QuestionTenResponse = 0;

//Variables used for the answers that are actually correct.
int QuestionOneCorrectAnswer = 0;
int QuestionTwoCorrectAnswer = 0;
int QuestionThreeCorrectAnswer = 0;
int QuestionFourCorrectAnswer = 0;
int QuestionFiveCorrectAnswer = 0;
int QuestionSixCorrectAnswer = 0;
int QuestionSevenCorrectAnswer = 0;
int QuestionEightCorrectAnswer = 0;
int QuestionNineCorrectAnswer = 0;
int QuestionTenCorrectAnswer = 0;

//Variables for the second attempt.
int QuestionOneResponseRetry = 0;
int QuestionTwoResponseRetry = 0;
int QuestionThreeResponseRetry = 0;
int QuestionFourResponseRetry= 0;
int QuestionFiveResponseRetry = 0;
int QuestionSixResponseRetry = 0;
int QuestionSevenResponseRetry = 0;
int QuestionEightResponseRetry = 0;
int QuestionNineResponseRetry = 0;
int QuestionTenResponseRetry = 0;

//Names of every section in strings.
string FirstSection = "Section 1: Simple Addition.";
string SecondSection = "Section 2: Simple Subtraction.";
string ThirdSection = "Section 3: Simple Multiplication.";

//Strings for whether you got the question right or wrong.
string CorrectAnswer = "You got the answer correct!";
string IncorrectAnswer = "You got the answer wrong. Please try again.";


//Questions put into strings for a second attempt if need be.
string QuestionOneRetry = "What is (1 + 1)?";
string QuestionTwoRetry = "What is (2 + 2)?";
string QuestionThreeRetry = "What is (9 + 9)?";
string QuestionFourRetry = "What is (3 + 3)?";
string QuestionFiveRetry = "What is (10 + 10)?";
string QuestionSixRetry;
string QuestionSevenRetry;
string QuestionEightRetry;
string QuestionNineRetry;
string QuestionTenRetry;

//Strings for the question number.
string QuestionOne = "Question 1: ";
string QuestionTwo = "Question 2: ";
string QuestionThree = "Question 3: ";
string QuestionFour = "Question 4: ";
string QuestionFive = "Question 5: ";
string QuestionSix = "Question 6: ";
string QuestionSeven = "Question 7: ";
string QuestionEight = "Question 8: ";
string QuestionNine = "Question 9: ";
string QuestionTen = "Question 10: ";























cout << QuestionOne << "What is (1 + 1)" << "?" << endl;
cin >> QuestionOneResponse;

QuestionOneCorrectAnswer = 2;

if (QuestionOneResponse == QuestionOneCorrectAnswer) {
cout << CorrectAnswer << endl;
} else {
cout << IncorrectAnswer << endl;
cout << QuestionOneRetry << endl;
cin >> QuestionOneResponseRetry;
}

cout << QuestionTwo << "What is (2 + 2)" << "?" << endl;
cin >> QuestionTwoResponse;

QuestionTwoCorrectAnswer = 4;

if (QuestionTwoResponse == QuestionTwoCorrectAnswer) {
cout << CorrectAnswer << endl;
} else {
cout << IncorrectAnswer << endl;
cout << QuestionTwoRetry << endl;
cin >> QuestionTwoResponseRetry;
}

cout << QuestionThree << "What is (9 + 9)" << "?" << endl;
cin >> QuestionThreeResponse;

QuestionThreeCorrectAnswer = 18;

if (QuestionThreeResponse == QuestionThreeCorrectAnswer) {
cout << CorrectAnswer << endl;
} else {
cout << IncorrectAnswer << endl;
cout << QuestionThreeRetry << endl;
cin >> QuestionThreeResponseRetry;
}

cout << QuestionFour << "What is (3 + 3)" << "?" << endl;
cin >> QuestionFourResponse;

QuestionFourCorrectAnswer = 6;

if (QuestionFourResponse == QuestionFourCorrectAnswer) {
cout << CorrectAnswer << endl;
} else {
cout << IncorrectAnswer << endl;
cout << QuestionFourRetry << endl;
cin >> QuestionFourResponseRetry;
}

cout << "What is (10 + 10)" << "?" << endl;
cin >> QuestionFiveResponse;

QuestionFiveCorrectAnswer = 20;

if (QuestionFiveResponse == QuestionFiveCorrectAnswer) {
cout << CorrectAnswer << endl;
} else {
cout << IncorrectAnswer << endl;
cout << QuestionFiveRetry << endl;
cin >> QuestionFiveResponseRetry;
}













cin >> Exit;
return 0;
}
