#ifndef TARGET
#define TARGET

/*
 * Class Target is simple interface for Client 
 * to call Request with Adapter implementation
 *
 * Thats it!
 * How does it work: 
 * 1) Client(main.cpp)->( Target(Adapter object).Request() )
 * 2) ( target(Adapter object).Request() ) -> Adaptee.SpecificRequest
 *
 * */

class Target {

	public:
		Target() {
			std::cout<<"Target ctor"<<std::endl;
		}
		Target(const Target & target) {
	 	        std::cout<<"Target Copy ctor"<< std::endl;
		}
		virtual void Request() {
			std::cout<< "Target Request"<<std::endl;
		}

};


#endif /* TARGET */



