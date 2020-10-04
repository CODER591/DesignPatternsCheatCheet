#ifndef ADAPTER
#define ADAPTER

/*
 * Object Adapter is simple  wrapper on Adaptee
 * But by composition!!! Not the inheritance
 * Thats it!
 *
 * How does it work: 
 * 1) Client(main.cpp)->( target(Adapter object).Request() )
 * 2) ( target(Adapter object).Request() ) -> Adaptee.SpecificRequest
 *
 * */

#include "target.h"
#include "adaptee.h"


class Adapter: public Target {

	public:
		Adapter():implementation_(std::move(Adaptee())){ 
			std::cout<<"Adapter ctor"<<std::endl;
		}
		Adapter(const Adapter & target) {
                        std::cout<<"Adapter Copy ctor"<< std::endl;
                }
		void Request() override {
		   int variable = 256;
		   implementation_.SpecificRequest( variable );
		}
	private:
		Adaptee implementation_;

};


#endif /* ADAPTER */



