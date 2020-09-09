
#include "singleton.h"

Singleton::Singleton() {

}

Singleton::~Singleton() {
  if(instance_)
	  delete instance_;
}

Singleton* Singleton::getInstance() {
  if(!instance_)
	  instance_ = new Singleton();

  return instance_;
}

Singleton* Singleton::instance_= nullptr;

