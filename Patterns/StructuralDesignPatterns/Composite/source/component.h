#ifndef COMPONENT_H
#define COMPONENT_H

#include <iostream>

/* Should be an interface, or at least base class */
/*
 * Declares the interface for objects in the composition.
 * Implements default behavior for the interface common to all classes, as appropriate. (DoSomething)
 * (My op: (optional)) Declares an interface for accessing and managing its child components.
 * (optional) defines an interface for accessing a component's parent in the recursive structure, and implements it if that's appropriate.
 *
 *
 * */
class Composite;

class Component {
	public:
		//lets imagine that we have here the whole interface for leafs
		virtual void DoSomething() = 0;
		Component () {
		   std::cout<<"Component_created by default ctor"<<std::endl;
		}
		virtual ~Component () {
			std::cout<<"Component_destructed"<<std::endl;
		}
		virtual void DoSomethingForComponent(Component* component_p) {}
		virtual void addElement(Component * component_ptr) {}
        // client should delete this pointer to avoid memory leak
		virtual void removeElement(Component* component_p) {}
		virtual Component* getElement( size_t index) { return nullptr; }
		virtual void DoSomethingWithEveryOne() {}
		virtual Composite* GetComposite(){ return nullptr;}

};


#endif /* COMPONENT_H */
