#ifndef  ABSTRACT_OBJ_H
#define  ABSTRACT_OBJ_H

#include <iostream>

enum class ObjectEntity {
  NOT_REAL,
  REAL
};

class AbstractCoolThing {
public:
  AbstractCoolThing() = default;
  virtual void SomeCoolFunction() const  = 0;
  virtual int AnotherCoolFunction() const = 0;
  virtual ObjectEntity WhichObjectAmI() const  = 0;

};

#endif /* ABSTRACT_OBJ_H */
