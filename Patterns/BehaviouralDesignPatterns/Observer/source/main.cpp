#include <iostream>

#include "all_include.h"


int main() {
  Publisher publisher;
  Observer observer1(&publisher);
  Observer observer2(&publisher);
  Observer observer3(&publisher);

  publisher.NotifyPodpischeks("Some cool staff happened");
  std::cout<<"---------------------------"<<std::endl;
  std::cout<<"One Podpischek unsubscribed"<<std::endl;
  observer2.Unsubscribe();
  publisher.NotifyPodpischeks("Vnimanie ANEKDOT");



  return 0;
}
