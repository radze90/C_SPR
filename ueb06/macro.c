#include <stdio.h>
#define SWAP(x,y) x^=y; y^=x; x^=y;
#define LSB(x) ((x)&(1))

int main() {
    /* SWAP */
    int x = 3;
    int y = 5;
    printf("x = %i\ny = %i\n", x, y);
    printf("SWAP(x,y)\n");
    SWAP(x,y)
    printf("x = %i\ny = %i\n", x, y);

    /* LSB */
    printf("LSB(x) = %i\n", LSB(x));
    return 0;
}
