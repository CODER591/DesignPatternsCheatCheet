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
		//must be present. Otherwize ObjectPool is anti-pattern
		void ResetState() {
			std::cout<<"State is reset. Object is clean as default constructed."<<std::endl;
		}

};




#endif /* PRODUCT */
