#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int hesapla(int x,int gecme){
    int i,puan,ogrenciler[100],kalanlar=0;
    float toplam=0;
    for(i=0;i<x;i++){
        printf("%d. Ogrencinin notunu girin: ",i+1);
        scanf("%d",&puan);
        toplam+=puan;
        ogrenciler[i]+=puan;
        if(puan <= gecme){
            kalanlar+=1;
        }
    }
    printf("Ortalama: %.2f",toplam/x);
    return kalanlar;
    
}
int main(int argc, char *argv[]) {
    int sayi,gnot;
    printf("Ogrenci sayisini girin: ");
    scanf("%d",&sayi);
    printf("Gecme notunu girin: ");
    scanf("%d",&gnot);

    printf("\nKalan ogrenci sayisi: %d",hesapla(sayi,gnot));
	return 0;
}
