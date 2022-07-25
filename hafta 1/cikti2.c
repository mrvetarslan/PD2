#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void fonk(void);
int gid = 287; //global degisken tanimlandi

int main(void) {
    printf("deneme1.c gid degisken degeri: %d\n",gid);
    fonk(); //deneme2.c dosyasindaki fonk() fonksiyonuna cagri
    
	return 0;
}
//deneme2.c
extern int gid; //global int degisken bildirimi

void fonk(void){
    printf("deneme2.c gid degisken degeri: %d",gid);
}
