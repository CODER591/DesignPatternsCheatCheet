#ifndef LINKER_H
#define LINKER_H
class Linker: public Common {
    public:
      Linker():Common(){}
      Linker(Common* ptr):Common(ptr){}
      void Handle() {
        std::cout<<"Handling Linkage"<<std::endl;
        if(GetNextHandler())
            GetNextHandler()->Handle();

      }
};

#endif /* LINKER_H */
