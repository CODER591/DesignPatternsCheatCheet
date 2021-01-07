#ifndef  CONTEXTS_H
#define  CONTEXTS_H

//Composition Context
class ContextComposition {
  private:
    AbstractStrategy * strategy_; //composition
  public:

    ContextComposition(StrategyChoice choice):strategy_(nullptr) {
      switch (choice) {
        case StrategyChoice::FIRST:
           strategy_ = new FirstStrategy();
           break;
        case StrategyChoice::SECOND:
           strategy_ = new SecondStrategy();
           break;
      }
    }
    ~ClientComposition() {
      delete strategy_;
    }
    void DoWorkWithChosenStrategy() {
      //calling some strategy methods
      strategy_ ->SomeStrategicWork();
    }
};

class ContextAggregation {
  private:
    AbstractStrategy * strategy_; //aggregation
  public:

    ContextAggregation(AbstractStrategy & strategy):strategy_(nullptr) {
    }

    void DoWorkWithChosenStrategy() {
      //calling some strategy methods
      strategy_ ->SomeStrategicWork();
    }
};


#endif /* CONTEXTS_H */
