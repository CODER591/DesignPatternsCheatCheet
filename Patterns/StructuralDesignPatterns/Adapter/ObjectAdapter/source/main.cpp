


#include <iostream>
#include <typeinfo>

#include "target.h"
#include "adapter.h"

int main() {

	Target *object = new Adapter();
	object->Request();

 return 0;
}
