#include <iostream>
#include "flyweight_factory.h"
#include "some_hard_object.h"
int main() {
  int nice_num =5;
  HardObject * nice_obj = FlyweightFactory::getInstance().makeOrGetHardObject(nice_num);
  std::cout << nice_obj->Get()<< std::endl;

  return 0;
}
