#include <iostream>

#include "caretaker.h"

int main() {
  //Client code
  Caretaker caretaker;
  caretaker.PrintState(); //  no entries -> print nothing
  caretaker.DoSomeCoolStaff();
  caretaker.MakeBackup();
  caretaker.PrintState(); //  first
  caretaker.DoSomeCoolStaff();
  caretaker.MakeBackup();
  caretaker.PrintState(); //  second
  caretaker.Undo();       //  first
  caretaker.Undo();       //  no entries -> print nothing
  caretaker.PrintState(); //  no entries -> print nothing


  return 0;
}
