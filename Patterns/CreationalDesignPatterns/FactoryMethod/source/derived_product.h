#ifndef DERIVED_PRODUCT_SP
#define DERIVED_PRODUCT_SP

#include <iostream>
#include "product.h"

class DerivedProduct: public Product {

	public:
		DerivedProduct(): Product() {
	         std::cout << "DerivedProduct is created" << std::endl;
		}
};


#endif /* DERIVED_PRODUCT_SP */
