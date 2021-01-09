#ifndef  CARETAKER_H
#define  CARETAKER_H

#include <stack>

#include "originator.h"

class Caretaker {
   public:
     Caretaker () = default;

     void DoSomeCoolStaff() {
       originator_.DoSomething();
     }

     void MakeBackup() {
       history_.push(originator_.Save());
     }
     void Undo() {
       if(!history_.size())
          return;

       Memento tmp = history_.top();
       history_.pop();
       originator_.Restore(tmp);
     }

     /* Only for demo */
     void PrintState() {
       originator_.PrintState();
     }


   private:
     Originator originator_; //Memento manager. Represent current state.
     std::stack<Memento> history_; // only straight-forward history. No middle access;
};

#endif /* CARETAKER_H */
