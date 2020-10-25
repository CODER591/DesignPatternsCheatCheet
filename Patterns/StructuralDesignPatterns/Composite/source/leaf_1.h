#ifndef LEAF1_H
#define LEAF1_H


#include "component.h"
/*
 * 
 * A leaf has no children.
 * Defines behavior for primitive objects in the composition.
 * 
 * 
 * */

class LeafFirst: public Component {
	public:
	  void DoSomething() override {
		  std::cout<<"Doing something in LeafFirst way"<<std::endl;
	  }

};


#endif /* LEAF1_H */
