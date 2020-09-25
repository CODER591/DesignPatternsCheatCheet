

#include <iostream>
#include "object_pool.h"

int main() {
   ObjectPool<Product>::getInstance().setPoolCapacity(10);
   Product * object = ObjectPool<Product>::getInstance().accquireObject();
   ObjectPool<Product>::getInstance().releaseObject(object);
   return 0;
}
