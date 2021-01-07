#ifndef  FIRST_STRATEGY_H
#define  FIRST_STRATEGY_H

class FirstStrategy:public AbstractStrategy {
public:
  FirstStrategy() = default;
  ~FirstStrategy() = default;
  //One way of doing something
  virtual void SomeStrategicWork() const override {
    std::cout<<"FirstStrategy Work"<<std::endl;
  }
};


#endif /*  FIRST_STRATEGY_H */
