#include <stdio.h>
#include <unistd.h>

int main(){
   sync();
   printf("done\n");
   return 0;
}
