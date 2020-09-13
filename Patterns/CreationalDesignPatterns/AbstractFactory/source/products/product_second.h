#ifndef PRODUCT_SECOND
#define PRODUCT_SECOND
#include "product.h"

class ProductSecond: public Product {

	public:
		ProductSecond() {
		    std::cout<<"ProductSecond is created;" << std::endl;
		}
		~ProductSecond() {
                    std::cout<<"ProductSecond is destructed" << std::endl;
                }

};

#endif
