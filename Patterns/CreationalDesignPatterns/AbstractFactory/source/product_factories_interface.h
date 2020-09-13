#ifndef PRODUCT_FACTORIES_INTERFACE
#define PRODUCT_FACTORIES_INTERFACE

#include "factory_holder/factory_holder_singleton.h"

/*
 * Main intent of this class to give endpoint user interface and ability to create product via "static" functions.
 * Also look into the FactoryHolderSingleton class description
 * */
class ProductFactoriesInterface {
        private:
                virtual void kek() =0; // just saving time for "privating" all ctors
        public:
                static Product* getFirstProduct() {
                   return FactoryHolderSingleton::getFirstFactory()->Create();
                }

                static Product* getSecondProduct() {
                   return FactoryHolderSingleton::getSecondFactory()->Create();
                }

};

#endif /* PRODUCT_FACTORIES_INTERFACE */
