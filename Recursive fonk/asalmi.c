#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int asalMi(int s,int x){
    if(s<2)
        return 0;
    if(x==1)
        return 1;
    if(s%x==0)
        return 0;
    return asalMi(s,x-1);
}
int main(int argc, char *argv[]) {
    int sayi,sonuc;
    printf("Bir sayi girin: ");
    scanf("%d",&sayi);
    sonuc=asalMi(sayi,sayi/2);
    if(sonuc==0)
        printf("%d asal degildir.",sayi);
    else
        printf("%d asaldir.",sayi);
    
	return 0;
}
