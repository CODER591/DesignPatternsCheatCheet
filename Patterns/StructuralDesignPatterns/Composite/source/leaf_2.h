#ifndef LEAF2_H
#define LEAF2_H


#include "component.h"
/*
 * 
 * A leaf has no children.
 * Defines behavior for primitive objects in the composition.
 * 
 * 
 * */

class LeafSecond: public Component {
      public:
	      void DoSomething() override {
	         std::cout<<"Doing something in LeafSecond way"<<std::endl;
	      }

};


#endif /* LEAF2_H */
