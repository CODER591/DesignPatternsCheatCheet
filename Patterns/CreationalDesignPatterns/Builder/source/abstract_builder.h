#ifndef ABSTRACT_BUILDER
#define ABSTRACT_BUILDER

/*
 * Interface to inherit and implement
 *
 *
 * Lets imagine that our Product is consisted of 3 major parts
 *
 *
 *
 * Builder is not a factory, it is about "how" object is created, but factory is about producing objects
 *
 */
#include "product.h"

class AbstractBuilder {
	public:
		virtual void buildFirstPart() = 0;
		virtual void buildSecondPart() = 0;
		virtual void buildThirdPart() = 0;
		virtual Product&& getResult() {
			return std::move(prod_instance_);
		}

		AbstractBuilder(): prod_instance_(Product()) {
			std::cout<<"AbstracttBuilder is called"<<std::endl;
		}
		virtual ~AbstractBuilder() {
			std::cout<<"~AbstractBuilder is called"<<std::endl;
		}


	protected:
		Product prod_instance_;


};

#endif /* ABSTRACT_BUILDER */
