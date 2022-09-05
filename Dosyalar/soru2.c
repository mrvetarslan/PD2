#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct insan {
    char ad[10];
    char bolum[10];
    int no;
};

void kayitOlusturma(FILE *fp){
    struct insan ogrenci;
    int kisi, i;
    fp = fopen("yeni.txt","w");
    printf("girilecek kisi sayisi: ");
    scanf("%d", &kisi);

    for (i = 0; i < kisi; i++) {
        printf("Lutfen bilgileri sirasiyla giriniz:");
        scanf("%s %s %d", ogrenci.ad, ogrenci.bolum, &ogrenci.no);
        fwrite(&ogrenci, sizeof(struct insan), 1, fp);
    }
    rewind(fp);
    fclose(fp);
}

void kayitEkleme(FILE *fp){
    struct insan ogrenci;
    int kisisayisi;
    fp = fopen("yeni.txt","a");
    printf("eklenecek kisi sayisi: ");
    scanf("%d", &kisisayisi);
    int i;
    for (i = 0; i < kisisayisi; i++) {
        printf("Lutfen bilgileri sirasiyla giriniz:");
        scanf("%s %s %d", ogrenci.ad, ogrenci.bolum, &ogrenci.no);
        fwrite(&ogrenci, sizeof(struct insan), 1, fp);
    }
    rewind(fp);
    fclose(fp);
}

void arama(FILE *fp){
    struct insan ogrenci;
    int x;
    printf("hangi no:");
    scanf("%d", &x);
    fp = fopen("yeni.txt","r");

    while(!feof(fp)){
        fread(&ogrenci, sizeof(struct insan),1,fp);
        if(x == ogrenci.no){
            printf("%s %s %d\n", ogrenci.ad, ogrenci.bolum, ogrenci.no);
            break;
        }
    }
    rewind(fp);
    fclose(fp);
}

int main() {
    FILE *fp;
    int x;
    printf("0- Programi sonlandirma\n1-Kayit olusturma\n2-Kayit ekleme\n3- Isime gore arama\n");
    printf("Bir secenek seciniz: ");
    scanf("%d", &x);
    switch (x) {
        case 0:
            break;
        case 1:
            kayitOlusturma(fp);
            break;
        case 2:
            kayitEkleme(fp);
            break;
        case 3:
            arama(fp);
            break;
    }
    return 0;
}
