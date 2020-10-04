#ifndef ADAPTEE
#define ADAPTEE

/*
 * Class Adaptee is class which we are want to wrap by using the composition in Adapter class
 * How does it work: 
 * 1) Client(main.cpp)->( target(Adapter object).Request() )
 * 2) ( target(Adapter object).Request() ) -> Adaptee.SpecificRequest
 *
 * */

class Adaptee {

	public:
		Adaptee(){
		   std::cout<<"Adaptee ctor"<<std::endl;
		}

		void SpecificRequest(int variable) {
                   std::cout<<"Some specific thing "<<
			   "happened with variable:"<< variable <<std::endl;
		}

};


#endif /* ADAPTER */



