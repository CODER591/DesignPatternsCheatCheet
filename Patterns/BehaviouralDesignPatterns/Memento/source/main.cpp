#include <iostream>

#include "caretaker.h"

int main() {
  //create some Mementos here
  //Client code
  Memento first(MementoState::FIRST);
  Memento second(MementoState::NONE);
  Memento third(MementoState::SECOND);
  Caretaker caretaker;
  caretaker.DoSomething(first);
  caretaker.DoSomething(second);
  caretaker.Undo();


  return 0;
}
