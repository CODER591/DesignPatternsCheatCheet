#ifndef FLYWEIGHT_FACTORY_H
#define FLYWEIGHT_FACTORY_H
//Flyweight factory should be and act like a object pool.
/*
   Actually ObjectPool pattern and Flyweight are similar, but:
   1.The main difference is that Flyweight resources are IMMUTABLE and the Object pool are MUTABLE.
   In the Object pool, at any given moment the object can be accessed only for one client,
   in Flyweight many clients can simultaneously use the same object.
*/

#include <iostream>
#include <vector>
#include "some_hard_object.h"

class FlyweightFactory {
   private:
     //std::map will also suite, but we need to manage unique id.
     std::vector<HardObject*> object_pool_;
     FlyweightFactory() = default;
   public:
     static FlyweightFactory& getInstance() {
       static FlyweightFactory nice;
       return nice;
     }
     /* Objects also could be allocated on a stack.
     In case of stack allocation we should use move semantaics. */
     HardObject* makeOrGetHardObject(int cool_number/* some parameters */) {
       for(unsigned int indexer = 0; indexer < object_pool_.size(); indexer++) {
         // Integer is here only for simplest example.
         if(object_pool_[indexer]->Get() == cool_number) {
           return object_pool_[indexer];
         }
       }
       HardObject* return_ptr = new HardObject(cool_number);
       object_pool_.push_back(return_ptr);
       return return_ptr;
     }
};

#endif /* FLYWEIGHT_FACTORY_H */
