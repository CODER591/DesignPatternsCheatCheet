#ifndef  MEMENTO_H
#define  MEMENTO_H

enum class MementoState {
  NONE =0,
  FIRST,
  SECOND,
  THIRD
};

class Memento {
  private:
    MementoState state_;
  public:
    Memento (MementoState state):state_(state) {}
    Memento ():state_(MementoState::NONE) {}
    Memento (const Memento & object_to_copy) {
      state_ = object_to_copy.state_;
    }
    void ChangeMementoState() {
      switch (state_){
        case MementoState::NONE:
             state_ = MementoState::FIRST;
             break;
        case MementoState::FIRST:
             state_ = MementoState::SECOND;
             break;
        case MementoState::SECOND:
             state_ = MementoState::THIRD;
             break;
        case MementoState::THIRD:
             state_ = MementoState::NONE;
             break;
      }
    }
    Memento getState() const {
      return *this;
    }

    /* Only for demo */
    void PrintState() {
      switch (state_){
        case MementoState::NONE:
             std::cout<<"MementoState::NONE:\n";
             break;
        case MementoState::FIRST:
             std::cout<<"MementoState::FIRST:\n";
             break;
        case MementoState::SECOND:
             std::cout<<"MementoState::SECOND:\n";
             break;
        case MementoState::THIRD:
             std::cout<<"MementoState::THIRD:\n";
             break;
      }
    }

};




#endif /* MEMENTO_H */
