#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int toplam(int n){
    if (n == 1)
        return n;
    else
        return (n + toplam(n - 1));
}
void main(){
    int sayi = 6;
    printf("Sonuc = %d", toplam(sayi));
}
