#include <iostream>

#include "context.h"
#include "interpreter.h"

int main() {

  Context context;
  context.input = "ad9a1a2t3f54d";

  NumberExpression num_exp;
  std::cout << "NumberExpression Result status: " << num_exp.Interpret(context)
            << " " << context.output<< std::endl;

  Context context_1;
  LettersExpression letters_exp;
  std::cout << "LettersExpression Result status: " << letters_exp.Interpret(context_1)
            << " " << context.output<< std::endl;


  return 0;
}
