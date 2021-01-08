#ifndef  ORIGINATOR_H
#define  ORIGINATOR_H

#include "memento.h"

class Originator {
  public:
    Originator(const Memento & state):current_state_(state) {}

    Originator():current_state_(MementoState::NONE) {}
    
    void Restore(const Memento & object) {
      current_state_ = object;
    }

    void Save(const Memento & object) {
      current_state_ = object;
    }
  private:
    Memento current_state_;
};

#endif /* ORIGINATOR_H */
