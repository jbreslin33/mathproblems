#include "MathProblems.h"

#include <iostream>
#include <string>

int main()
{
  std::cout << "This program generates Math Problems!" << std::endl;

  MathProblems mp;
  
  //ask user a question
  std::cout << mp.getAdditionQuestion() << std::endl;

  //get user response save to string
  std::string str;
  getline (std::cin,str);

  //check user answer with correct answer and print out whether correct or not.
  if (mp.checkAnswer(str))
    std::cout << "Correct" << std::endl;
  else
    std::cout << "Wrong" << std::endl;
	



}
