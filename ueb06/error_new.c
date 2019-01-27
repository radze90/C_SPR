#include <stdio.h>
#define TWO_PI 3.14 + 3.14
#define MULT(a, b) ((a) * (b))
#define ADD(a, b) ((a) + (b))

int main() {
    float x = TWO_PI;
    printf("%.2f\n\n", x);

    int a = 2;
    int b = 4;
    int y = MULT(a, b + 3);
    int z =  ADD(a, b) * 4;
    printf("MULT = %i\n", y);
    printf("ADD  = %i\n", z);
    return 0;
}
