

#include <iostream>
#include "facade.h"

int main() {
	Facade customer_service;
	int choice;
	std::cout << "Make a choice" << std::endl;
	std::cout << "1 -SALES" << std::endl;
	std::cout << "2 -PAYMENT" << std::endl;
	std::cout << "3 -SUPPORT" << std::endl;
	std::cin>> choice;
	
	customer_service.serveTheGoodPeopleOfEngland(static_cast<Division>(choice));
	
	return 0;
}
