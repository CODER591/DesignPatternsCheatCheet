#ifndef  INTERPRETER_H
#define  INTERPRETER_H

enum CheckResult {
  FAIL = 0,
  PASS
};

class BaseExpression {
  public:
    BaseExpression() =default;
    virtual int Interpret(Context & context) = 0;

};

// Lets check whether we have expression consisted only from numbers.

class NumberExpression: public BaseExpression {
 public:
   NumberExpression() = default;
   int Interpret(Context & context) override {
     unsigned int counter = 0;
     for(int i = 0; i < context.input.size();i++) {
       if(context.input[i] > 47 && context.input[i] < 58) {
         counter++;
         context.output+=context.input[i];
       }
     }

     return (context.input.size() - counter) == 0 ? PASS : FAIL;
   }

};

class LettersExpression: public BaseExpression {
  public:
    LettersExpression() = default;
    int Interpret(Context & context) override {
      unsigned int counter = 0;
      for(int i = 0; i < context.input.size();i++) {
        if( (context.input[i] > 64 && context.input[i] < 91)
            || (context.input[i] > 96 && context.input[i] < 122)) {
          counter++;
          context.output+=context.input[i];
        }
      }

      return (context.input.size() - counter) == 0 ? PASS : FAIL;
    }
};

#endif /* INTERPRETER_H */
