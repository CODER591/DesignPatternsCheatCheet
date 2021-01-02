#ifndef CHAIN_OF_RESPONSIBILITY_H
#define CHAIN_OF_RESPONSIBILITY_H

/* Lets implement Chain of responsibility pattern by using compiler example
   In our case we consider next steps(chain nodes)
   - Comments deletion
   - Preprocessing (defines macros expansion)
   - Compilation
   - Linkage
 */
//Base class
class Common {
  private:
    Common* next_node_;
  public:
    Common():next_node_(nullptr){}
    Common(Common* next_node):next_node_(next_node) {}
    virtual void Handle() {}
    Common* GetNextHandler(){
      return next_node_;
    }
    void add_to_chain(Common * node) {
      if(next_node_) {
        next_node_->add_to_chain(node);
      } else {
        next_node_ = node;
      }
    }

};

class Compiler: public Common {
  public:
    Compiler():Common(){}
    Compiler(Common* ptr):Common(ptr){}
    void Handle() {
      std::cout<<"Handling overall Compilation process"<<std::endl;
      if(GetNextHandler())
          GetNextHandler()->Handle();
    }
};

#endif /* CHAIN_OF_RESPONSIBILITY_H */
