#ifndef BASE_COMMAND_H
#define BASE_COMMAND_H

class BaseCommand {
  private:
    Receiver * receiver_; //expect to hold the reference. So no need to create destructor
  public:
    BaseCommand(Receiver*receiver_ref):receiver_(receiver_ref){}

    virtual void Execute() {
      receiver_->PerformSomeOperation();
    }
};

#endif /*  BASE_COMMAND_H */
