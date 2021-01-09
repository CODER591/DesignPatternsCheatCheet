#ifndef  OBSERVER_H
#define  OBSERVER_H

#include <iostream>
#include <string>

class Observer {
  private:
    Publisher* publisher_;

  public:
    Observer(Publisher* publisher);
    void Unsubscribe();
    void Update(const std::string & str) const;

};

#endif /* OBSERVER_H */
