#ifndef PREPROCESSOR_H
#define PREPROCESSOR_H

class Preprocessor: public Common {
    public:
      Preprocessor():Common(){}
      Preprocessor(Common* ptr):Common(ptr){}
      void Handle() {
        std::cout<<"Handling Preprocessing"<<std::endl;
        if(GetNextHandler())
            GetNextHandler()->Handle();
      }
};
#endif /* PREPROCESSOR_H */
