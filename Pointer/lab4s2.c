#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    char *adSoyad;
    adSoyad=(char*)malloc(18*sizeof(char));
    strcpy(adSoyad,"Murvet Arslan");
    printf("%s",adSoyad);
    
	return 0;
}
