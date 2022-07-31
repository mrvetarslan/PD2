#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ortakBolen(int s1, int s2) {
    if (s2 == 0)
        return s1;
    return ortakBolen(s2, s1 % s2);
}

int main(int argc, char *argv[]) {
    int sayi1 = 25;
    int sayi2 = 200;
    printf("Bu iki sayinin en buyuk ortak boleni: %d",ortakBolen(sayi1, sayi2));
    return 0;
}
 


