#ifndef  ABSTRACT_STRATEGY_H
#define  ABSTRACT_STRATEGY_H

enum class StrategyChoice {
  FIRST,
  SECOND
};


/*
  Strategy pattern is similar to the template method by its structure and implementation
*/

class AbstractStrategy {
public:
  AbstractStrategy() = default;
  virtual ~AbstractStrategy() = default;
  virtual void SomeStrategicWork() const = 0;
};


#endif /*  ABSTRACT_STRATEGY_H */
