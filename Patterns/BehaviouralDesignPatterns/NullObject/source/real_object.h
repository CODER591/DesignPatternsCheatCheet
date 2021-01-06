#ifndef  REAL_OBJ_H
#define  REAL_OBJ_H

#include "abstract_object.h"

class RealCoolThing: public AbstractCoolThing {
    public:
      RealCoolThing() = default;
      /* Lets imagine that those functions doing some real work */
      void SomeCoolFunction() const  override {
        std::cout<< "SomeCoolFunction from REAL object"<<std::endl;
      }
      int AnotherCoolFunction()const override {
        std::cout<< "AnotherCoolFunction from REAL object"<<std::endl;
        return 777; //btw nice number
      }
      ObjectEntity WhichObjectAmI()const override {
        return ObjectEntity::REAL;
      }
};

#endif /* REAL_OBJ_H */
