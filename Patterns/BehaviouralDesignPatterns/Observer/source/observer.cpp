
#include "all_include.h"

Observer::Observer(Publisher* publisher):publisher_(publisher) {
  publisher_->AddSubscriber(this);
}
void Observer::Unsubscribe() {
  publisher_->RemoveSubscriber(this);
}
void Observer::Update(const std::string & str) const {
  std::cout<<"Update Message Received: "<< str << std::endl;
}
