#include <stdio.h>
#include "hello.h"
#include "bye.h"

#define NAME "username"


int main(){
   hello(NAME);
   bye(NAME);

   return 0;
}
