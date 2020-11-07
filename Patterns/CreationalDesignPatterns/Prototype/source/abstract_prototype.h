#ifndef ABSTRACT_PROTOTYPE
#define ABSTRACT_PROTOTYPE

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


class AbstractProduct {
	private:
		//simulation of complex object where should be the "deep copy used"
		std::vector<int>some_values_;
		std::string str_;
	public:
		AbstractProduct(const std::vector<int>& values, const std::string & streng):some_values_(std::move(values)), str_(std::move(streng)){
		}
		
		// we suspect everywhere apropriate constructors call
		AbstractProduct(const AbstractProduct & product) { 
		   some_values_ = product.some_values_;
		   str_ = product.str_;
		}

		AbstractProduct(const AbstractProduct * product) {
           some_values_ = product->some_values_;
           str_ = product->str_;
        }
		AbstractProduct(AbstractProduct && product) {
           some_values_ = std::move(product.some_values_);
           str_ = std::move(product.str_);
        }

		virtual AbstractProduct* Clone() = 0;

		virtual ~AbstractProduct(){}

};


#endif /* ABSTRACT_PROTOTYPE */
