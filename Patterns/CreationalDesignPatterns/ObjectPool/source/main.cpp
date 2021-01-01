

#include <iostream>
#include "object_pool.h"

int main() {
   ObjectPool<Product>::getInstance().setPoolCapacity(5);
   Product * object = ObjectPool<Product>::getInstance().accquireObject();
   Product * object_1 = ObjectPool<Product>::getInstance().accquireObject();
   ObjectPool<Product>::getInstance().releaseObject(object);
   ObjectPool<Product>::getInstance().releaseObject(object_1);
   return 0;
}
