#include <stdio.h>

int main(int args, char *argv[]) {

#ifndef __APPLE__ // __BananaMac__
#error "Kompilierung Abgebrochen, da kein Banana Mac OS verwendet wird!"
#endif

#ifdef __APPLE__ // __BirneX__
    long var1, var2, var3, summe;
    if (args != 4) {
        printf("Es wurden keine 3 Zahlen eingegeben!\n");
        return 1;
    }
    sscanf(argv[1],"%ld", &var1);
    sscanf(argv[2],"%ld", &var2);
    sscanf(argv[3],"%ld", &var3);
    summe = var1 + var2 + var3;
    printf("%ld + %ld + %ld = %ld\n", var1, var2, var3, summe);
    return 0;
#elif __LockedBSE__
    int var1, var2, var3, summe;
    if (args != 4) {
        printf("Es wurden keine 3 Zahlen eingegeben!\n");
        return 1;
    }
    sscanf(argv[1],"%d", &var1);
    sscanf(argv[2],"%d", &var2);
    sscanf(argv[3],"%d", &var3);
    summe = var1 + var2 + var3;
    printf("%d + %d + %d = %d\n", var1, var2, var3, summe);
    return 0;
#elif __Doors10__
    short var1, var2, var3, summe;
    if (args != 4) {
        printf("Es wurden keine 3 Zahlen eingegeben!\n");
        return 1;
    }
    sscanf(argv[1],"%hd", &var1);
    sscanf(argv[2],"%hd", &var2);
    sscanf(argv[3],"%hd", &var3);
    summe = var1 + var2 + var3;
    printf("%hd + %hd + %hd = %hd\n", var1, var2, var3, summe);
    return 0;
#endif

    return 1;
}

