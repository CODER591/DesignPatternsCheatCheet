#ifndef  TEMPLATE_METHOD_H
#define  TEMPLATE_METHOD_H

/* All <salt> of this pattern is:
   Base class handle all common methods
   which derived classes inherit exept one method which they
   should override according to their sense.
   Look below */
class AbstractNiceClass {
  public:
    virtual void TemplateMethodToOverride() const = 0;

    void localMethod_1() const {
      std::cout<<"localMethod_1"<<std::endl;
    }

    void localMethod_2() const {
      std::cout<<"localMethod_2"<<std::endl;
    }

    void Execute() {
      localMethod_1();
      localMethod_2();
      TemplateMethodToOverride();
    }
};
class NiceOverride: public AbstractNiceClass {
  public:
    void TemplateMethodToOverride() const override {
      std::cout<<"VERY Nice overridation"<<std::endl;
    }
};
class BadOverride: public AbstractNiceClass {
  public:
    void TemplateMethodToOverride() const override {
      std::cout<<"BAD overridation"<<std::endl;
      std::cout<<"A lot of bAd OvErIdAtIoN"<<std::endl;
    }
};
#endif /* TEMPLATE_METHOD_H */
