#include <iostream>
#include "abstract_strategy.h"
#include "first_strategy.h"
#include "second_strategy.h"
#include "contexts.h"

int main() {
  ContextComposition client(StrategyChoice::FIRST);
  client.DoWorkWithChosenStrategy();
  SecondStrategy strategy;
  ContextAggregation client_agg(&strategy);

  client_agg.DoWorkWithChosenStrategy();

  return 0;
}
