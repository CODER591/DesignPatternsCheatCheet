

#include <iostream>
#include <string>


#include "product_factories_interface.h"


enum class FactoryType{
	NONE = 0,
	LAMBORGINI,
	BUGATTI
};

int main() {

	int choice = 0;
	std::cout<<"Input Factory that You want to build:"<<std::endl;
	std::cin>>choice;
	Product * prod =nullptr;
        switch(choice) {
		case (int) FactoryType::LAMBORGINI:
			std::cout<<"Getting Product from Sirst factory"<<std::endl;
			prod = ProductFactoriesInterface::getFirstProduct();
			break;
		case (int) FactoryType::BUGATTI:
			std::cout<<"Getting Product from Second factory"<<std::endl;
         	        prod = ProductFactoriesInterface::getSecondProduct();
                        break;
		case (int) FactoryType::NONE:
		default:
			std::cout<<"Select, please something else"<<std::endl;
			break;

	}

	delete prod;

	return 0;
}
