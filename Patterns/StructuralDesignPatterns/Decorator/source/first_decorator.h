#ifndef FIRST_DECORATOR_Hcl
#define FIRST_DECORATOR_H

#include "decorator.h"


class FirstDecorator: public Decorator {
	private:
	   Component* comp_instance;
	public:
	   FirstDecorator (Component* component):comp_instance(component) {}
	   
	   virtual void DoSomething() override {
		   std::cout<<"DoSomething in FirstConcreteDecorator style. Lets imagine there some new fucntionality"<<std::endl;
		   StartJumping();
		   StartSquashing();
		   comp_instance->DoSomething();
	   }
	private:
	   void  StartJumping() {
		   std::cout<<"Jumping"<<std::endl;
	   }
	   void  StartSquashing() {
		   std::cout<<"Squashing"<<std::endl;
	   }
};



#endif /* FIRST_DECORATOR_H */
