#include <iostream>

#include "component.h"
#include "concrete_component.h"
#include "decorator.h"
#include "first_decorator.h"
#include "second_decorator.h"

int main() {
	Component* example = new Component;
	Decorator example_manager(example);
	example_manager.DoSomething();
	
	Component* example_conc = new ConcreteComponent;
	FirstDecorator example_conc_manager(example_conc);
	example_conc_manager.DoSomething();
	
	Component* sec_example_conc = new ConcreteComponent;
	SecondDecorator sec_conc_manager(sec_example_conc);
	sec_conc_manager.DoSomething();


	std::cout<<std::endl<<"Separator"<<std::endl<<std::endl;
	//memory leak, but let`s leave it as interface example.
	SecondDecorator decor(new FirstDecorator(new Component));

	decor.DoSomething();

	delete example;
	delete example_conc;
	delete sec_example_conc;
	
	return 0;
}
