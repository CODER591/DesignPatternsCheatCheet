#ifndef SECOND_PROTOTYPE
#define SECOND_PROTOTYPE

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
#include <queue>

class SecondProduct: public AbstractProduct {
	private:
           std::queue<int> my_queue_;
	public:
	    //"delegating ctor" should be always first. Otherwise we would have -Wreorder error"
	    SecondProduct(const std::queue<int>& que, const std::vector<int>& values, const std::string & streng ):AbstractProduct(values,streng), my_queue_(std::move(que)){
		}

		SecondProduct(const SecondProduct & product): AbstractProduct(product) {
			my_queue_ = product.my_queue_;
		}

		SecondProduct(const SecondProduct * product): AbstractProduct(product) {
            my_queue_ = product->my_queue_;
        }

		virtual AbstractProduct* Clone() override {
			return new SecondProduct(this);
		}



};


#endif /* SECOND_PROTOTYPE */
