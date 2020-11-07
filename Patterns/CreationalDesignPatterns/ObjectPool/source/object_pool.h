#ifndef OBJECT_POOL
#define OBJECT_POOL
/*
 * Object Pool should be implemented as Singleton.
 *
 * Lets name objects as Products
 * Lets implement this pattern by using Meyers Singleton
 * 
 * */

#include <list>
#include <iterator>
#include <algorithm>

#include "product.h"

template <typename T>
class ObjectPool {

	private:
	  std::list<T*> free_objects_;
	  std::list<T*> accuired_objects_;
	  unsigned int capacity_;
	  ObjectPool(): capacity_(0) { }
	public:
	  unsigned int getPoolCapacity() {
                return capacity_;
	  }
	  void setPoolCapacity(unsigned int current_capacity) {
             capacity_ = current_capacity;
	     for(unsigned int i = 0; i < capacity_; i++){
	       free_objects_.push_back(new Product);
	     }
	  }
	  T* accquireObject() {
             T* tmp = free_objects_.back();
             if(tmp) {
		 accuired_objects_.push_back(tmp);
		 free_objects_.pop_back();
		 return tmp;
	     }
	     return nullptr;
	  }
	  /* We considering that pointers are unique from their nature */
	  //also there could be suitable to use list::erase( iterator) but for now let it be 
	  void releaseObject(T * prod_ptr) {
	       /*Also there we should call method to reset object to default state, in case we T is equal to some complex object, not one of the simple types*/
               bool is_present = false;
	       typename std::list<T*>::iterator it = accuired_objects_.begin();
	       while(it != accuired_objects_.end()) {
	           if(*it == prod_ptr) {
                      is_present = true;
		   }
		   it++;
	       }
	       if(is_present) {
	         accuired_objects_.remove(prod_ptr);
		 free_objects_.push_back(prod_ptr);
	       }
	  }
	  static ObjectPool& getInstance() {
              static ObjectPool instance;
              return instance;
	  }
	  // Do we need the dctor? does this make any sense?
};

#endif /*OBJECT_POOL*/
