#ifndef COMMENTS_DELETOR_H
#define COMMENTS_DELETOR_H

class CommentsDeletor: public Common {
    public:
      CommentsDeletor():Common(){}
      CommentsDeletor(Common* ptr):Common(ptr){}
      void Handle() {
        std::cout<<"Handling Comments deletion"<<std::endl;
        if(GetNextHandler())
            GetNextHandler()->Handle();
      }
};
#endif /*COMMENTS_DELETOR_H*/
