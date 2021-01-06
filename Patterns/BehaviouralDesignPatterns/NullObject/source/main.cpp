#include <iostream>

#include "null_object.h"
#include "real_object.h"

void example_func(AbstractCoolThing * ptr) {
  ptr->SomeCoolFunction();
  ptr->AnotherCoolFunction();
  
}

int main() {
  RealCoolThing reall;
  NullObjectCoolThing null_object;

  example_func(&reall);
  example_func(&null_object);

  return 0;
}
