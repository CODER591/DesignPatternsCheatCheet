#ifndef  VISITOR_H
#define  VISITOR_H

class FirstTypeElement;
class SecondTypeElement;

class AbstractVisitor {
  public:
    AbstractVisitor() = default;
    //Some business logic should be done in those functions.
    virtual void VisitFirstTypeElement(FirstTypeElement* elem) = 0;
    virtual void VisitSecondTypeElement(SecondTypeElement* elem) = 0;
};

class FirstTypeVisitor: public AbstractVisitor{
  public:
    FirstTypeVisitor() = default;
    void VisitFirstTypeElement(FirstTypeElement* elem) {
      std::cout<<"FirstTypeVisitor visited FirstTypeElement" <<std::endl;
    }
    void VisitSecondTypeElement(SecondTypeElement* elem) {
      std::cout<<"FirstTypeVisitor visited SecondTypeElement" <<std::endl;
    }
};

class SecondTypeVisitor: public AbstractVisitor{
  public:
    SecondTypeVisitor() = default;
    void VisitFirstTypeElement(FirstTypeElement* elem) {
      std::cout<<"SecondTypeVisitor visited FirstTypeElement" <<std::endl;
    }
    void VisitSecondTypeElement(SecondTypeElement* elem) {
      std::cout<<"SecondTypeVisitor visited SecondTypeElement" <<std::endl;
    }
};

#endif /* VISITOR_H */
