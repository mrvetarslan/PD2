#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    char *adSoyad;
    adSoyad=(char*)malloc(6*sizeof(char));
    strcpy(adSoyad,"Murvet");
    printf("Cikti 1:%s\n",adSoyad);
    adSoyad=(char*)realloc(adSoyad,12*sizeof(int));
    strcpy(adSoyad,"Murvet Arslan");
    printf("Cikti 2:%s",adSoyad);
	return 0;
}
