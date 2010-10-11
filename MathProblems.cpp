#include "MathProblems.h"

#include <stdlib.h>
#include <sstream>
#include <iostream>//Ah the way it should be

MathProblems::MathProblems()
{
	mQuestion = "What is 7 + 3\n";
}

MathProblems::~MathProblems()
{

}

std::string MathProblems::convertInt(int number)
{
   std::stringstream ss;//create a stringstream
   ss << number;//add number to the stream
   return ss.str();//return a string with the contents of the stream
}

bool MathProblems::checkAnswer(std::string answer)
{
	if (answer == mAnswer)
		return true;
	else
		return false;

}

std::string MathProblems::getAdditionQuestion()
{

   srand ( time(NULL) );

   /* generate numbers: */
   int mNumber1 = rand() % 10 + 1;
   int mNumber2 = rand() % 10 + 1;
   int mCorrectAnswer = mNumber1 + mNumber2;

   mAnswer = convertInt(mCorrectAnswer);

   mQuestion = convertInt(mNumber1) + " + " + convertInt(mNumber2) + " = ";

   return mQuestion;

}


