#ifndef FACTORY_HOLDER_SINGLETON
#define FACTORY_HOLDER_SINGLETON

#include "../factories/abstract_factory.h"
#include "../factories/first_factory.h"
#include "../factories/second_factory.h"

/* So, we are not able do declare factory interface such as "static virtual"
 * Considering this, we should create singleton
 * to be able use to factory interface as "static" functions. So, there is required object creation
 *
 *
 * Life of this class is consisted of 3 stages
 * 1) getInstance creating ourself
 * 2) getFirstFactory initialized first factory
 * 3) getSecondFactory initialized second factory
 * And FactoryHolderSingleton is servant of ProductFactoriesInterface
 * 
 *
 * */


class FactoryHolderSingleton {
        private:
                static AbstractFactory* firstfactory_instance_;
                static AbstractFactory* secondfactory_instance_;
		static FactoryHolderSingleton* main_instance_;
	protected:
                FactoryHolderSingleton(){}
	public:
		//Honestly, maybe this interface should be separated into 2 separate singletons, but for now let it be.
                static AbstractFactory* getFirstFactory();
		static AbstractFactory* getSecondFactory();
		static FactoryHolderSingleton* getInstance();
};


#endif /*FACTORY_HOLDER_SINGLETON*/
