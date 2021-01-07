#include <iostream>
#include "abstract_strategy.h"
#include "first_strategy.h"
#include "second_strategy.h"
#include "contexts.h"

int main() {
  ClientComposition client(StrategyChoice::FIRST);
  client.DoWorkWithChosenStrategy();
  FirstStrategy strategy;
  ClientAggregation client_agg(&strategy);

  client_agg.DoWorkWithChosenStrategy();

  return 0;
}
