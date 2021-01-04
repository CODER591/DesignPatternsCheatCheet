#ifndef  BASE_MEDIATOR_H
#define  BASE_MEDIATOR_H

#include "component.h"

// General purpose of the Mediator class is to create some kind of wrapper
// over the Component class which will make all job for you

//Mediator pattern could be implemented as
// 1. One Mediator class for a lot different components
// 2. Or  One Mediator to one Component.

//For those 2 cases implemented 2 Notify methods

//This Base class is only for defining the interface.
class BaseMediator {
 public:
  BaseMediator() = default;
  BaseMediator(BaseComponent *ptr):component_(ptr){}

  virtual void Notify(BaseComponent * component, Component_event event) = 0;
  virtual void Notify(Component_event event) = 0;

 protected:
   // For case 2.
   BaseComponent * component_;
};



#endif /* BASE_MEDIATOR_H */
