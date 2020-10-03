#ifndef FIRST_PRODUCT
#define FIRST_PRODUCT

/*
 * This class is representing the First child of the Abstraction hierarchy
 * 
 * */




#include "../bridge_impl_hierarchy/abstract_product_impl.h"




class FirstProduct: public AbstractProduct {

	public:
	FirstProduct(AbstractProductImpl * object):AbstractProduct(object) {
	     std::cout <<"FirstProduct ctor isCalled" <<std::endl;
	}
	void doingSomething() override {
		/* lets define only difference between FirstProduct and SecondProduct is in 
		 * calling impl_ method in different order
		 * just to "simulate" "different" behaviour
		 */
             impl_->firstMethod();
             impl_->secondMethod();

	}

};

#endif
