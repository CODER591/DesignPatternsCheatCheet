#ifndef PRODUCT_BASE
#define PRODUCT_BASE

#include <iostream>

class Product {
     public:
	     Product() {
		     std::cout<<"Product is created"<<std::endl;
	     }
	     virtual ~Product(){
	             std::cout<<"Product is destructed"<<std::endl;
	     }

};


#endif
