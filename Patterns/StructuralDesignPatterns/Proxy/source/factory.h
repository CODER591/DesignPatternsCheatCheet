#ifndef FACTORY_H
#define FACTORY_H

#include "base.h"
#include "proxy.h"
#include "proxied.h"

class Factory {
  private:
    Factory() = default;
    ~Factory() = default;
  public:
    static Proxy* makeProxy(/*some params*/) {
      return new Proxy();
    }
    static Proxied* makeProxied(/*some params*/) {
      return new Proxied();
    }
};

#endif /* FACTORY_H */
