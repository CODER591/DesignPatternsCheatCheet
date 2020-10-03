#ifndef FIRST_PRODUCT_IMPL
#define FIRST_PRODUCT_IMPL

#include "abstract_product_impl.h"

/*
 *
 * First child of AbstractProductImpl
 *
 * */


class FirstProductImpl: public AbstractProductImpl {
	public:
		FirstProductImpl() {
		  std::cout <<"FirstProductImpl ctor isCreated" <<std::endl;
		}
		void firstMethod() override {
		  std::cout <<"FirstProductImpl firstMethod isCalled" <<std::endl;
		}
                void secondMethod() override {
		  std::cout <<"FirstProductImpl secondMethod isCalled" <<std::endl;
		}


};




#endif
