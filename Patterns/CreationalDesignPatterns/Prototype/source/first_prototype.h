#ifndef FIRST_PROTOTYPE
#define FIRST_PROTOTYPE

// AbstractProduct is the same as AbstractPrototype
/*
 *
 * Prototype is about object is able to create clones of himself
 *
 * So, cloning the object could be performed in 2 ways
 * 1) "shallow copy" -- simply copy field by field
 * 2) "Deep copy"    -- copy everything even the state of internal objects
 *
 *
 *
 * Yes, I am too lazy to think about some very complex object <3
 * */
#include <vector>
#include <iostream>
#include "abstract_prototype.h"
#include <list>

class FirstProduct: public AbstractProduct {
	private:
           std::list<int> my_list_;
	public:
	        FirstProduct(const std::list<int>& list, const std::vector<int>& values,const std::string & streng ):my_list_(list),AbstractProduct(values,streng) {

		}
		FirstProduct(const FirstProduct & product): AbstractProduct(product) {
			my_list_ = product.my_list_;
		}

		FirstProduct(const FirstProduct * product): AbstractProduct(product) {
                        my_list_ = product->my_list_;
                }

		virtual AbstractProduct* Clone() override {
			return new FirstProduct(this);
		}


};


#endif /* FIRST_PROTOTYPE */
