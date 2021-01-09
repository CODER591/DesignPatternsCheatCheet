#ifndef  PUBLISHER_H
#define  PUBLISHER_H

#include <iostream>
#include <list>

typedef unsigned int uint;

class Publisher {
   private:
     std::list<Observer*> observers_;
   public:
     Publisher ()  = default;
     // Add observer
     void AddSubscriber(Observer* podpischek);
      // Remove observer
     void RemoveSubscriber(Observer* podpischek);
     // Notfy observers
     void NotifyPodpischeks(const std::string &message) const;
     // could be renamed as Do some business logic
     void CreateMessage(const char * msg) const;
};

#endif /* PUBLISHER_H */
