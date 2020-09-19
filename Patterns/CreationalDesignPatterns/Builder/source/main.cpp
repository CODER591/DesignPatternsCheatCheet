
#include <iostream>
#include "abstract_builder.h"
#include "first_builder.h"
#include "director.h"
#include "second_builder.h"

int main() {

	AbstractBuilder * builder = new FirstBuilder();
	AbstractBuilder * second_builder = new SecondBuilder();
	Director director(builder);

	Product result = director.buildSomething();

	director.changeBuilder(second_builder);
	Product another_result = director.buildSomething();

        result.printProduct();
	another_result.printProduct();
	return 0;
}
