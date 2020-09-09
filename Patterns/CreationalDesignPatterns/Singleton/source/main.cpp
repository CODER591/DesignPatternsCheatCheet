


#include <iostream>
#include "singleton.h"

int main() {
	Singleton* single_single = Singleton::getInstance();
        Singleton* second = Singleton::getInstance();
	std::cout<<single_single<<std::endl;

	std::cout << second << std::endl;

	return 0;
}
