#ifndef SECOND_DECORATOR_H
#define SECOND_DECORATOR_H

#include "decorator.h"


class SecondDecorator: public Decorator {
	private:
	   Component* comp_instance;
	public:
	   SecondDecorator (Component* component):comp_instance(component) {}
	   
	   virtual void DoSomething() override {
		   std::cout<<"DoSomething in SecondConcreteDecorator style. Lets imagine there some new fucntionality"<<std::endl;
		   StartShooting();
		   StartShouting();
		   comp_instance->DoSomething();
	   }
	private:
	   void  StartShooting() {
		   std::cout<<"Shooting"<<std::endl;
	   }
	   void  StartShouting() {
		   std::cout<<"Shouting"<<std::endl;
	   }
};



#endif /* SECOND_DECORATOR_H */
