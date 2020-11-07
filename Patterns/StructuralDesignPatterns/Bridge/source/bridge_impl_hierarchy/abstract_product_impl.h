#ifndef ABSTRACT_PRODUCT_IMPL
#define ABSTRACT_PRODUCT_IMPL



/*
 * There would be the base class of Implementation hierarchy.
 *
 * */
#include <iostream>

class AbstractProductImpl {
	public:
		AbstractProductImpl() {}
		virtual ~AbstractProductImpl() {}
		virtual void firstMethod() = 0;
		virtual void secondMethod() = 0;

};



#endif  /* */
