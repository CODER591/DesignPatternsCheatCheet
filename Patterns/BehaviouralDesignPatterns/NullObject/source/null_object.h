#ifndef  NULL_OBJ_H
#define  NULL_OBJ_H

#include "abstract_object.h"

class NullObjectCoolThing: public AbstractCoolThing {
    public:
      NullObjectCoolThing() = default;
      /* Here in NULL object they are just stubs, and they are doing nothing. */
      void SomeCoolFunction() const  override {

      }
      int AnotherCoolFunction()const override {
        return 42; //some stubbed number
      }
      ObjectEntity WhichObjectAmI()const override {
        return ObjectEntity::NOT_REAL;
      }
};

#endif /* NULL_OBJ_H */
