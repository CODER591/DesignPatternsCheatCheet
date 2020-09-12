#ifndef PRODUCT_SP
#define PRODUCT_SP

#include <iostream>
/*
 * This enum is just to provide an example of parametrized FactoryMethod
 * This is not pattern requirement, or something like that
 * */
enum class TypeSelector{
	NONE = 0,
	PRODUCT,
	DERIVED_PRODUCT
};



class Product {

	public:
		Product() {
	         std::cout<<"Product is created"<<std::endl;
		}
};

#endif /*PRODUCT_SP*/
