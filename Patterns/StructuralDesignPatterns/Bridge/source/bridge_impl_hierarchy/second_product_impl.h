#ifndef SECOND_PRODUCT_IMPL
#define SECOND_PRODUCT_IMPL

#include "abstract_product_impl.h"

/*
 *
 * Second child of AbstractProductImpl
 *
 * */


class SecondProductImpl: public AbstractProductImpl {
	public:
		SecondProductImpl() {
		    std::cout <<"SecondProductImpl ctor isCalled" <<std::endl;
		}
		void firstMethod() override {
		  std::cout <<"SecondProductImpl firstMethod isCalled" <<std::endl;
		}
                void secondMethod() override {
		  std::cout <<"SecondProductImpl secondMethod isCalled" <<std::endl;
		}


};




#endif
