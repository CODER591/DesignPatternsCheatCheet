#ifndef PROXIED_H
#define PROXIED_H

#include "base.h"

class Proxied: public Base {
 public:
   Proxied(/* some params */) = default;
   void Operation(/*some params*/ ) const override {
     std::cout<<"Cool operation in Proxied"<<std::endl;
   }
};




#endif /* PROXIED_H */
