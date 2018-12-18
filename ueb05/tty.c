#include <stdio.h>
#include <unistd.h>

int main(){
   
   char *term;

   term = ttyname(0);
   puts(term);

   return 0;
}
