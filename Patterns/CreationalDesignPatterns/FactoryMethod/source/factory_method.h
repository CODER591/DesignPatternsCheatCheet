#ifndef FACTORY_METHOD
#define FACTORY_METHOD

#include "product.h"
#include "derived_product.h"
/* This design pattern is FactoryMethod
 * Basically this pattern is used for flexible object creation
 *
 * So, main intention is to instantiate our objects in right way, 
 * in case it should be specific, we using factory method.
 *
 * There is "independent" implementation where we are operating on others objects.
 * 
 * So, also could be imlementation where we are making our FactoryMethod inside of some "product" abstract class.
 * But I don`t like it, and think that factory method should be isolated to the separate class, as in this particular implementation.
 * 
 * */


class FactoryMethod {

	private:
		FactoryMethod(){}
		//All ctors should be private or protected.

	public:
	static Product *CreateProduct(){
	    return new Product();
	}


	//Just example of parametrized FactoryMethodPattern
	static  Product * CreateProductParam(TypeSelector selector) {
             switch(selector) {
                case TypeSelector::PRODUCT:
                        return new Product();
                case TypeSelector::DERIVED_PRODUCT:
                        return new DerivedProduct();
                case TypeSelector::NONE:
                default:
                        return nullptr;
             }
        }


};


#endif
