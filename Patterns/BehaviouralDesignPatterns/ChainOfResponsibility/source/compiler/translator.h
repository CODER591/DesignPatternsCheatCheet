#ifndef TRANSLATOR_H
#define TRANSLATOR_H

class Translator: public Common {
    public:
      Translator():Common() {}
      Translator(Common* ptr):Common(ptr){}
      void Handle() {
        std::cout<<"Handling Translation to Assembler"<<std::endl;
        if(GetNextHandler())
            GetNextHandler()->Handle();
      }
};
#endif /* TRANSLATOR_H */
