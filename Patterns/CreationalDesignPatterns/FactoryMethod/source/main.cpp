

#include <iostream>
#include "factory_method.h"
#include "product.h"

int main() {


	Product* my_prod= FactoryMethod::CreateProduct();
	
	Product* parametrized_product = FactoryMethod::CreateProductParam(TypeSelector::DERIVED_PRODUCT);

	delete my_prod;
	delete parametrized_product;

    return 0;
}
