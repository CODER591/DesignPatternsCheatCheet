#ifndef FIRST_FACTORY
#define FIRST_FACTORY


/*
 *
 * First Factory is producing the ProductFirst
 *
 *
 * 
 * */

#include "abstract_factory.h"
#include "../products/product.h"
#include "../products/product_first.h"

class FirstFactory :public AbstractFactory {


      public:
	Product* Create() {
	 return new ProductFirst();
	}

};

#endif
