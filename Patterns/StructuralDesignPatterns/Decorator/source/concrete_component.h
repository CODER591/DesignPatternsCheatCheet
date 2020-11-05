#ifndef CONCRETE_COMPONENT_H
#define CONCRETE_COMPONENT_H

#include "component.h"

class ConcreteComponent:public Component {
	public:
	 void DoSomething() override {
		 std::cout<<"DoSomething in Concrete Component style"<<std::endl;
	 }
};



#endif /* CONCRETE_COMPONENT_H */
