#ifndef  SECOND_STRATEGY_H
#define  SECOND_STRATEGY_H

class SecondStrategy:public AbstractStrategy  {
public:
  SecondStrategy() = default;
  ~SecondStrategy() = default;
  //Another way of doing something.
  virtual void SomeStrategicWork() const override {
    std::cout<<"SecondStrategy Work"<<std::endl;
  }
};


#endif /*  SECOND_STRATEGY_H */
