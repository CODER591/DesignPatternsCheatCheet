#ifndef  CONCRETE_MEDIATOR_H
#define  CONCRETE_MEDIATOR_H
#include "base_mediator.h"
#include "component.h"

class ConcreteMediator: public BaseMediator {

 public:
   ConcreteMediator() = default;
   ConcreteMediator(BaseComponent *component_ptr):BaseMediator(component_ptr) {}

    // For case 1.
    void Notify(BaseComponent * component, Component_event event) {
      switch (event) {
        case Component_event::JUMPED :
           std::cout<< "Component JUMPED" << std::endl;
           break;
        case Component_event::SCREAMED :
              std::cout<< "Component SCREAMED" << std::endl;
              break;
      }

    }
    //For case 2.
    void Notify(Component_event event) {
      switch (event) {
        case Component_event::JUMPED :
           std::cout<< "Component of type: " <<static_cast<int>(component_->getComponentType())
           << "   JUMPED" << std::endl;
           break;
        case Component_event::SCREAMED :
              std::cout<< "Component of type: "<<static_cast<int>(component_->getComponentType())
              << "  SCREAMED" << std::endl;
              break;
      }
    }
};

#endif /* CONCRETE_MEDIATOR_H */
