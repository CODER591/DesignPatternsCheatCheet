#ifndef COMPONENT_H
#define COMPONENT_H

#include <iostream>

class Component {
	public:
	 virtual void DoSomething() {
		 std::cout<<"DoSomething in basic Component style"<<std::endl;
	 }
	 virtual ~Component() {}
};



#endif /* COMPONENT_H */
