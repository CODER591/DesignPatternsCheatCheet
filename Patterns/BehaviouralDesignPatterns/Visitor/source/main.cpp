#include <iostream>

#include "element.h"
#include "visitor.h"

int main() {
  //Create elements and accept visitors to them
  FirstTypeElement first_type_element;
  SecondTypeElement second_type_element;

  FirstTypeVisitor visitorFirstType;
  SecondTypeVisitor visitorSecondType;

  first_type_element.Accept(visitorFirstType);
  first_type_element.Accept(visitorSecondType);

  second_type_element.Accept(visitorFirstType);
  second_type_element.Accept(visitorSecondType);

  return 0;
}
