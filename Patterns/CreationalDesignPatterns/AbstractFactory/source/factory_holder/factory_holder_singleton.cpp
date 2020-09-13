
#include "factory_holder_singleton.h"


AbstractFactory* FactoryHolderSingleton::getFirstFactory() {
     if(!firstfactory_instance_)
         firstfactory_instance_ = new FirstFactory();
     return firstfactory_instance_;
}

AbstractFactory* FactoryHolderSingleton::getSecondFactory() {
	if(!secondfactory_instance_)
           secondfactory_instance_= new SecondFactory();
        return secondfactory_instance_;
}

 //should be called one time, but is safe to call multiple times
FactoryHolderSingleton* FactoryHolderSingleton::getInstance() {
    if(!main_instance_)
        main_instance_ = new FactoryHolderSingleton();
    return main_instance_;
}


AbstractFactory* FactoryHolderSingleton::firstfactory_instance_=nullptr;

AbstractFactory* FactoryHolderSingleton::secondfactory_instance_=nullptr;

FactoryHolderSingleton* FactoryHolderSingleton::main_instance_ 
                                                     = FactoryHolderSingleton::getInstance();
