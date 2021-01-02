#ifndef  SECOND_COMMAND_H
#define  SECOND_COMMAND_H

class SecondCommand: public BaseCommand{
  public:
    SecondCommand(Receiver*receiver_ref):BaseCommand(receiver_ref) {}
    void Execute() {
      std::cout << "SecondCommand executed" << std::endl;
      BaseCommand::Execute(/*some params*/);
    }
};


#endif /* SECOND_COMMAND_H */
