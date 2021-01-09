#ifndef  ELEMENT_H
#define  ELEMENT_H

#include "visitor.h"

// 1. element makes acception of Visitor.
// 2. Visitor makes visit.
class AbstractElement {
 public:
   AbstractElement() = default;
   virtual void AcceptFirstTypeVisitor(FirstTypeVisitor& visitor) = 0;
   virtual void AcceptSecondTypeVisitor(SecondTypeVisitor& visitor) = 0;
};

class FirstTypeElement : public AbstractElement {
 public:
   FirstTypeElement() = default;
   void AcceptFirstTypeVisitor(FirstTypeVisitor& visitor) {
     visitor.VisitFirstTypeElement(this);
   }
   void AcceptSecondTypeVisitor(SecondTypeVisitor& visitor) {
     visitor.VisitFirstTypeElement(this);
   }
};

class SecondTypeElement : public AbstractElement {
 public:

   SecondTypeElement() = default;
   void AcceptFirstTypeVisitor(FirstTypeVisitor& visitor) {
     visitor.VisitSecondTypeElement(this);
   }
   void AcceptSecondTypeVisitor(SecondTypeVisitor& visitor) {
     visitor.VisitSecondTypeElement(this);
   }

};

#endif /* end of include guard:  ELEMENT_H */
