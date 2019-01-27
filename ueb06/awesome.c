#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "awesome.h"

int main() {
#ifdef DEBUG
    puts("starting");
#endif

#if __awesome_ver < 2
#error "Die Library ist älter als Version 2 und wird nicht mehr Unterstützt"
#elif __awesome_ver == 2
    something_awesome(42);
#elif __awesome_ver == 3
    do_something_awesome(42);
#endif
    hello_awesome(getlogin());

#ifdef DEBUG
    puts("done");
#endif
    return EXIT_SUCCESS;
}
