#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int topla(int s){
    if(s==1 || s==0){
        return s;
    }
    else{
        return (s+topla(s-1));
    }
}
int main(int argc, char *argv[]) {
    int sayi;
    printf("Bir sayi girin: ");
    scanf("%d",&sayi);
    printf("Girilen sayiyi kadar olan sayilarin toplami: %d",topla(sayi));
    return 0;
}
