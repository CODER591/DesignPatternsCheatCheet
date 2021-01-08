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
    
    Memento getState(){
      return *this;
    }

};




#endif /* MEMENTO_H */
