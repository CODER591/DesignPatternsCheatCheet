
/* 
 * This bridge implementation is just to show the essential structure.
 *
 *
 * */

#include "bridge_impl_hierarchy/abstract_product_impl.h"
#include "bridge_impl_hierarchy/first_product_impl.h"
#include "bridge_impl_hierarchy/second_product_impl.h"

#include "bridge_abstraction_hierarchy/bridge.h"
#include "bridge_abstraction_hierarchy/first_product.h"
#include "bridge_abstraction_hierarchy/second_product.h"

int main() {

     /*We allow only abstraction hierarchy managing the implementation hierarchy*/

     AbstractProductImpl* objj = new FirstProductImpl();
     AbstractProduct * prod = new FirstProduct(objj);

     AbstractProduct * prod_1 = new SecondProduct(objj);

     prod->doingSomething();
     prod_1 -> doingSomething();


     AbstractProductImpl* obj_1 = new SecondProductImpl();

     AbstractProduct * prod_2 = new SecondProduct(obj_1);

     prod_2->doingSomething();

     delete objj;
     delete prod;
     delete prod_1;
     delete obj_1;
     delete prod_2;


 return 0;
}
