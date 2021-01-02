#include <iostream>

#include "chain_of_responsibility.h"
#include "compiler/comments_deletor.h"
#include "compiler/preprocessor.h"
#include "compiler/translator.h"
#include "compiler/linker.h"

int main() {
  CommentsDeletor com_del;
  Preprocessor preprocessor;
  Translator translator;
  Linker linker;


  Compiler compiler;
  compiler.add_to_chain(&com_del);
  com_del.add_to_chain(&preprocessor);
  preprocessor.add_to_chain(&translator);
  translator.add_to_chain(&linker);

  compiler.Handle();


  return 0;
}
