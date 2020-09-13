#ifndef SECOND_FACTORY
#define SECOND_FACTORY


/*
 *
 * Second Factory is producing the ProductSecond
 *
 *
 * 
 * */

#include "abstract_factory.h"
#include "../products/product.h"
#include "../products/product_second.h"

class SecondFactory: public AbstractFactory {
      

      public:
	SecondFactory(){}
	Product* Create() {
	 return new ProductSecond();
	}

};

#endif /* SECOND_FACTORY*/
