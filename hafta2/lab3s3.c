#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int basamakBul(int sayi){
    if(sayi == 0){
        return 0;
    }
    else{
        return (sayi%10 + basamakBul(sayi/10));
    }
}
int main(int argc, char *argv[]) {
    int sayi=987;
    basamakBul(sayi);
    printf("Sayinin basamak degerlerinin toplami: %d",basamakBul(sayi));    
	return 0;
}
