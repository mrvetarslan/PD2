#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct personel{
    char adi[21];
    struct personel *sonraki;
};
typedef struct personel dugum;
dugum *head,*oncekiDugum,*yeni,*silinecek;

void ara(char *aranan){
    dugum *p;
    p=head;
    oncekiDugum=head;
    while(p->sonraki != NULL){
        p=p->sonraki;
        if(strcmp(p->sonraki) >= 0)
            break;
        oncekiDugum=p;
    }
}

void ekle(char *s){
    yeni=(dugum*)malloc(sizeof(dugum));
    strcpy(yeni->adi,s);
    ara(yeni->adi);
    yeni->sonraki=oncekiDugum->sonraki;
    oncekiDugum->sonraki=yeni;
}

void sil(char *s){
    ara(s);
    silinecek=oncekiDugum->sonraki;
    oncekiDugum->sonraki=silinecek->sonraki;
    free(silinecek);
}

void listele(void){
    dugum *p;
    p=head;
    p=p->sonraki;
    while(p != NULL){
        printf("%s\n",p->adi);
        p=p->sonraki;
    }
}

void enUzunBulma(void){
    dugum *p,*enuzun;
    p=head;
    p=p->sonraki;
    enuzun=p;
    while(p != NULL){
        if(strlen(p->adi) >= strlen(enuzun->adi))
            enuzun=p;
        p=p->sonraki;
    }
    printf("\n\n En uzun: %s Uzunluk: %d",enuzun->adi,strlen(enuzun->adi));
    getchar();
}
int main(int argc, char *argv[]) {
    char sec,s[21];
    head=(dugum*)malloc(sizeof(dugum));
    strcpy(head->adi,"listenin basi");
    head->sonraki=NULL;
    do{
        system("cls");
        listele();
        printf("1-Ekle \n 2-Sil \n 3-En uzun isim \n 4-Cikis \n Sec: ");
        sec=getchar();
        switch(sec){
            case 1:
                printf("Adi: ");
                gets(s);
                ekle(s);
                break;
            case 2:
                printf("Adi: ");
                gets(s);
                sil(s);
                break;
            case 3:
                enUzunBul();
                break;
            case 4:
                exit(0);
                break;
        }
    }
    while(1);

	return 0;
}
