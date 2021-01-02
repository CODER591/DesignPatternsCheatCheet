#ifndef PROXY_H
#define PROXY_H

#include "base.h"
#include "proxied.h"
/* This object is wrapping the "Proxied"  */

/* The main purpose of Proxy pattern is to hide the Proxied object
    And perform some other operations before/after Proxied "Operation". */

class Proxy: public Base {
 public:
  Proxy():hidden_(Proxied()) {} // Proxied could be "moved"

  Proxy(const Proxied & proxied_obj):hidden_(proxied_obj) {} // Proxied could be "moved"

  ~Proxy() = default;

  void customOperationFirst(/*some params*/) const {
    std::cout<<"FirstCustomOperation"<<std::endl;
  }
  void customOperationSecond(/*some params*/) const {
    std::cout<<"SecondCustomOperation"<<std::endl;
  }
  void Operation(/*some params*/) const override {
    customOperationFirst();
    customOperationSecond();
    hidden_.Operation();
  }
 private:
   Proxied hidden_; //Proxied here
};


#endif /* PROXY_H */
