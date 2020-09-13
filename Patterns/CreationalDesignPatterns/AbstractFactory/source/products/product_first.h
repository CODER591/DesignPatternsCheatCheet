#ifndef PRODUCT_FIRST
#define PRODUCT_FIRST

#include "product.h"

class ProductFirst: public Product {
	public:
	ProductFirst() {
	 std::cout<<"ProductFirst is created "<<std::endl;
	}
	~ProductFirst(){
	 std::cout<<"ProductFirst is destructed "<<std::endl;
	}

};

#endif
