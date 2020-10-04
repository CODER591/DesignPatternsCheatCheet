#ifndef ADAPTER
#define ADAPTER

/*
 * Class Adapter is simple "functional" wrapper on Adaptee
 * Thats it!
 * How does it work: 
 * 1) Client(main.cpp)->( target(Adapter object).Request() )
 * 2) ( target(Adapter object).Request() ) -> Adaptee.SpecificRequest
 *
 * */

#include "target.h"
#include "adaptee.h"


class Adapter: public Target, Adaptee {

	public:
		Adapter(){ 
			std::cout<<"Adapter ctor"<<std::endl;
		}
		Adapter(const Adapter & target) {
                        std::cout<<"Adapter Copy ctor"<< std::endl;
                }
		void Request() override {
		   int variable = 10;
		   SpecificRequest( variable );
		}

};


#endif /* ADAPTER */



