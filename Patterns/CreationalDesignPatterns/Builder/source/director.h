#ifndef DIRECTOR
#define DIRECTOR


#include "abstract_builder.h"
#include "product.h"

/*
 * The purpose of Director class is only to manage building process.
 *
 *
 *
 * */

class Director {

	private:
		AbstractBuilder* builder_;
	public:
		Director() {
		}
		Director(AbstractBuilder * builder):builder_(builder) {}

		Product&& buildSomething() {
			builder_->buildFirstPart();
			builder_->buildSecondPart();
			builder_->buildThirdPart();
			return builder_->getResult();
		}
		void changeBuilder(AbstractBuilder* n_builder) {
			if(n_builder) {
				delete builder_;
				builder_ = n_builder;
			}
		}
		~Director() {
			delete builder_;
		}

};

#endif
