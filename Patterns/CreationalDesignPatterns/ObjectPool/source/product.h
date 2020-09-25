#ifndef PRODUCT
#define PRODUCT

#include <iostream>


class Product {

	public:
	  Product() {
	      std::cout<<"Product is created"<<std::endl;
	  }
	  ~Product() {
	      std::cout<<"Product is destrcuted"<<std::endl;
	  }

};







#endif /* PRODUCT */
