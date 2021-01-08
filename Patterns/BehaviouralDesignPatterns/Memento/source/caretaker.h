#ifndef  CARETAKER_H
#define  CARETAKER_H

#include <stack>

#include "originator.h"

class Caretaker {
   public:
     Caretaker (const Memento & memento_object):originator_(memento_object){}
     Caretaker () = default;

     void DoSomething(const Memento & object) {
       originator_.Save(object);
       history_.push(object);
     }
     void Undo() {
       Memento tmp = history_.top();
       history_.pop();
       originator_.Restore(tmp);
     }
   private:
     Originator originator_; //Memento manager. Represent current state.
     std::stack<Memento> history_; // only straight-forward history. No middle access;
};

#endif /* CARETAKER_H */
