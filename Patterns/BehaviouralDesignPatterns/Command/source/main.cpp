#include <iostream>
#include "receiver.h"
#include "base_command.h"
#include "first_command.h"
#include "second_command.h"

int main() {
  //as a client we working with the command
  //command goes to receiver.
  Receiver receiver;
  FirstCommand first_command(&receiver);

  first_command.Execute();

  SecondCommand second_command(&receiver);

  second_command.Execute();



}
