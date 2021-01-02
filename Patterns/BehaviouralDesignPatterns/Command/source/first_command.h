#ifndef  FIRST_COMMAND_H
#define  FIRST_COMMAND_H

#include "base_command.h"

class FirstCommand: public BaseCommand{
  public:
    FirstCommand(Receiver*receiver_ref):BaseCommand(receiver_ref) {}
    void Execute() {
      //imagine there some additional details
      std::cout << "FirstCommand executed" << std::endl;
      BaseCommand::Execute();
    }
};


#endif /* FIRST_COMMAND_H */
