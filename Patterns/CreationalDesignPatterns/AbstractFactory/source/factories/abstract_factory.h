#ifndef ABSTRACT_FACTORY
#define ABSTRACT_FACTORY


/* 
 * We are implementing the abstract factory pattern 
 * In this file we have Base parent factory class
 * BaseClass == CarFactory
 * First child  == FirstFactory
 * Second child == SecondFactory
 *
 *
 * Abstract factory pattern only responsibility and main task, only in being interface.
 *
 * */


#include"../products/product.h"

#include <string>
class AbstractFactory {
	public:
		virtual Product* Create() = 0;
};


#endif /* ABSTRACT_FACTORY */
