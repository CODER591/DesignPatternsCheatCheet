#ifndef FACADE_H
#define FACADE_H

/* Lets imagine that it is a some kind of customer service support.
 * and customer is dealing only for it.
 *
 * We have 3 divisions in it.
 * 
 * Sales  -- contact sales in case we want to purschase something
 * PaymentProcessing -- contact in case we have issues with payment processing
 * ProductSupport -- contact in case customer have the questions regarding product
 *
 * The main idea of the Facade pattern is representing sub-systems
 * 
 * */

#include "payment_division.h"
#include "sales_division.h"
#include "support_division.h"

enum class Division {
	SALES = 1,
	PAYMENT,
	SUPPORT

};


class Facade {
	
   public:
    PaymentSupport payment_suport_;
    SalesDivision sales_division_;
    SupportDivision support_division_;
    Facade() { 
		std::cout<<"Customer Service is initialized"<<std::endl;
		
	}
	
	void serveTheGoodPeopleOfEngland(Division division) {
		switch(division) {
		   case Division::SALES:
		      std::cout<<"Contacting Sales"<<std::endl;
		      sales_division_.Communicate();
		      break;
		   case Division::PAYMENT:
		      std::cout<<"Contacting payment"<<std::endl;
		      payment_suport_.Communicate();
		      break;
		   case Division::SUPPORT:
		      std::cout<<"Contacting support"<<std::endl;
		      support_division_.Communicate();
		      break;
		}
	}

};

#endif /* FACADE_H */
