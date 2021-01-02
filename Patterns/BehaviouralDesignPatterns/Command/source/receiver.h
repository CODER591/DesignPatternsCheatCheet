#ifndef RECEIVER_H
#define RECEIVER_H


/* Class which will be actually doing main work. */
class Receiver {
  public:
    Receiver() = default;
    void PerformSomeOperation(){
      std::cout<<"Receiver received and operation is performed.\n";
    }
};

#endif /* RECEIVER_H */
