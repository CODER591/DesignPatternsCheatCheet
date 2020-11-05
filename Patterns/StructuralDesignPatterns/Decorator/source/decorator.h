#ifndef DECORATOR_H
#define DECORATOR_H

#include "component.h"

class Decorator: public Component {
	private:
	   Component* comp_instance;
	public:
	   Decorator() = default;
	   Decorator (Component* component):comp_instance(component) {}
	   
	   virtual void DoSomething() override {
		   std::cout<<"DoSomething in Decorator style. "<<std::endl;
		   comp_instance->DoSomething();
	   }
};



#endif /* DECORATOR_H */
