#include <iostream>
#include "base.h"
#include "proxy.h"
#include "factory.h"

int main() {
  std::cout<<"Dealing with Proxy"<<std::endl;
  Base* object = Factory::makeProxy();
  object->Operation();
  std::cout<<"Dealing with Proxied"<<std::endl;
  Base* object_1 = Factory::makeProxied();
  object_1->Operation();

  return 0;
}
