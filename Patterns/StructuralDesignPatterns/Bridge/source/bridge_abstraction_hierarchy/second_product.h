#ifndef SECOND_PRODUCT
#define SECOND_PRODUCT

/*
 * This class is representing the Second child of the Abstraction hierarchy
 * 
 * */


#include "../bridge_impl_hierarchy/abstract_product_impl.h"




class SecondProduct: public AbstractProduct {

	public:
	SecondProduct(AbstractProductImpl * object):AbstractProduct(object) {
	    std::cout <<"SecondProduct ctor isCalled" <<std::endl;
	}
	void doingSomething() override {
		/* lets define only difference between FirstProduct and SecondProduct is in 
		 * calling impl_ method in different order
		 * just to "simulate" "different" behaviour
		 */
	    impl_->secondMethod();
	    impl_->firstMethod();
	}

};

#endif
