#ifndef  ORIGINATOR_H
#define  ORIGINATOR_H

#include "memento.h"

class Originator {
  public:
    Originator(const Memento & state):current_state_(state) {}

    Originator():current_state_(MementoState::NONE) {}

    void DoSomething() {
      current_state_.ChangeMementoState();
    }

    void Restore(const Memento & object) {
      current_state_ = object.getState();
    }

    Memento Save() {
      return Memento(current_state_); // getting copy
    }

    /* Only for demo */
    void PrintState() {
      current_state_.PrintState();
    }

  private:
    Memento current_state_;
};

#endif /* ORIGINATOR_H */
