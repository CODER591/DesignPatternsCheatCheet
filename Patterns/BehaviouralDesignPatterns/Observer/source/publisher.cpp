#include "all_include.h"

void Publisher::AddSubscriber(Observer* podpischek) {
  observers_.push_back(podpischek);
}
 // Remove observer
void Publisher::RemoveSubscriber(Observer* podpischek) {
  observers_.remove(podpischek);
}
// Notfy observers
void Publisher::NotifyPodpischeks(const std::string &message) const {
  for(auto* observer:observers_) {
    observer->Update(message);
  }
}
// could be renamed as Do some business logic
void Publisher::CreateMessage(const char * msg) const {
  std::string cool_message(msg);
  NotifyPodpischeks(cool_message);
}
