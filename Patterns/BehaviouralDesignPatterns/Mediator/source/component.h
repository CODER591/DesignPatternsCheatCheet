#ifndef  COMPONENT_H
#define  COMPONENT_H

enum class Component_type {
  TYPE_1,
  TYPE_2
};

enum class Component_event {
  JUMPED,
  SCREAMED
};

class BaseComponent {
   public:
     BaseComponent(Component_type type):type_(type) {}
     Component_type getComponentType() {
       return type_;
     }
   private:
     Component_type type_;
};

class ConcreteComponent: public BaseComponent {
  public:
    ConcreteComponent(Component_type type):BaseComponent(type) {}
};

#endif /* end of include guard:  COMPONENT_H */
