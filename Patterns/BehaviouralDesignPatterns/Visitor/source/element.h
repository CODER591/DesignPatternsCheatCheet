#ifndef  ELEMENT_H
#define  ELEMENT_H

#include "visitor.h"

// 1. element makes acception of Visitor.
// 2. Visitor makes visit.
class AbstractElement {
 public:
   AbstractElement() = default;
   virtual void Accept(AbstractVisitor& visitor) = 0;
};

class FirstTypeElement : public AbstractElement {
 public:
   FirstTypeElement() = default;
   void Accept(AbstractVisitor& visitor) {
     visitor.VisitFirstTypeElement(this);
   }
};

class SecondTypeElement : public AbstractElement {
 public:

   SecondTypeElement() = default;
   void Accept(AbstractVisitor& visitor) {
     visitor.VisitSecondTypeElement(this);
   }
};

#endif /* end of include guard:  ELEMENT_H */
