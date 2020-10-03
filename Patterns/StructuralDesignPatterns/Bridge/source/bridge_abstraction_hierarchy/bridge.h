#ifndef ABSTRACT_PRODUCT
#define ABSTRACT_PRODUCT


/*
 * Bridge pattern is about separation hierarchies of implementation and abstraction.
 * Which means we would have :
 * 1. 2 hierarchies.(abstraction and implementation)
 * 2. Abstraction hierarchy agregate implementation hierarchy.
 * So, from 2. we got flexibility as we could substitute any implementation to any class from  abstraction hierarchy.
 *
 * So, there is abstraction hierarchy encapsulates the implementation hierarchy
 * */


/*
 * This class is representing the bridge
 * 
 * */


/* Simple Example:
 * 
 * Abstraction hierarchy is for operating systems.
 * OS:
 *   --Windows(child)
 *   --Linux(child)
 *
 * Implementation hierarchy is for different types of processors
 * Processors:
 *    --ARM
 *    --MIPS
 * */



#include "../bridge_impl_hierarchy/abstract_product_impl.h"




class AbstractProduct {
	protected:
		AbstractProductImpl * impl_;
	public:
	AbstractProduct(AbstractProductImpl * object): impl_(object) {}
	virtual void doingSomething() = 0 ;

};

#endif
