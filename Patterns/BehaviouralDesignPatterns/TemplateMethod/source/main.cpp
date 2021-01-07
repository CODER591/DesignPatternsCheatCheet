#include <iostream>
#include "template_method.h"

int main() {


  NiceOverride nice;
  nice.Execute();

  BadOverride bad;
  bad.Execute();
  
  return 0;
}
