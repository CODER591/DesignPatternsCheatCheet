#include <iostream>
#include "base_mediator.h"
#include "concrete_mediator.h"
#include "component.h"


int main() {
  ConcreteComponent component(Component_type::TYPE_1);
  ConcreteComponent component_2(Component_type::TYPE_2);
  ConcreteMediator conc_med(&component);
  conc_med.Notify(Component_event::JUMPED);

  ConcreteMediator conc_med2;
  conc_med2.Notify(&component_2, Component_event::SCREAMED);

  return 0;
}
