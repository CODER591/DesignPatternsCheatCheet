#ifndef COMPOSITE_H
#define COMPOSITE_H

#include "component.h"
#include  <list>
#include  <memory>
#include <algorithm>
#include "leaf_1.h"

/*
 * Defines behavior for components having children.
 * Stores child components.
 * Implements child-related operations in the Component interface.
 * 
 * */


class Composite : public Component {
	private:
		std::list<Component*> list_;
	public:
	    Composite(){
		}
		void DoSomething() override {
			std::cout<<"Do something in Composite way"<<std::endl;
		}
		//Composite is the same kind of leaf but with 'privileges'
		void DoSomethingForComponent(Component* component_p) override {
			auto tmp = std::find(list_.begin(),list_.end(),component_p);
			if (tmp != list_.end()){
				(*tmp)->DoSomething();
			}
			
		}
		
		void addElement(Component * component_ptr)override {
			list_.push_back(component_ptr);
		}
        // client should delete this pointer to avoid memory leak
		void removeElement(Component* component_p) override {
			if(!component_p)
			   return;
		    list_.erase( std::remove( list_.begin(), list_.end(), component_p), list_.end() );
		}
		Component* getElement( size_t index) override {
			auto iter = list_.begin();
			std::advance(iter, index);
			return *iter;
		}
		void DoSomethingWithEveryOne() override {
			for(auto iter = list_.begin(); iter != list_.end(); ++iter) {
			   std::cout<< "One of the elements is equal to "<< (*iter) <<std::endl;
			   (*iter)->DoSomething();
		    }
		}
		virtual Composite* GetComposite(){ return this;}
};


#endif /* COMPOSITE_H */
