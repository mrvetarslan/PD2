#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct ogrenci{
    int no;
    char adi[40];
    int vize,final;
    struct ogrenci *sonraki;
};                                       //Dugum yapisi
typedef struct ogrenci dugum;
dugum *head,*yeniDugum,*oncekiDugum,*enBasarili;

void ogrenciListeOlustur(){
    int n,k;
    printf("Kac elemanli liste olusturcaksin: ");
    scanf("%d",&n);
    for(k=0;k<n;k++){     //ilk dugum ekleniyor
        if(k==0){
            yeniDugum=(dugum*)malloc(sizeof(dugum));
            head=yeniDugum;
        }
        else{
            yeniDugum->sonraki=(dugum*)(sizeof(dugum));
            yeniDugum=yeniDugum->sonraki;
        }
        printf("Ogrenci no: ");
        scanf("%d",&yeniDugum->no);
        printf("Ogrenci adi: ");
        scanf("%s",yeniDugum->adi);
        printf("Ogrenci vize: ");
        scanf("%d",&yeniDugum->vize);
        printf("Ogrenci final: ");
        scanf("%d",&yeniDugum->final);
    }
    yeniDugum->sonraki=NULL;
}

void ogrenciListele(){
    double donemNotu=0;
    dugum *p;
    p=head;
    while(p != NULL){
        printf("\n ************** \n");
        printf("Ogrenci No:%d\t",p->no);
        printf("Ogrenci Adi:%s\t",p->adi);
        printf("Ogrenci Vize:%d\t",p->vize);
        printf("Ogrenci Final:%d\t",p->final);
        donemNotu=p->vize*0.4+p->final*0.6;
        printf("Donem notu: %.2f\t",donemNotu);
        printf("\n *************** \n");
        p=p->sonraki;
    }
}

void ogrenciEkle(){
    int kayitNo;
    dugum *p,*q;
    yeniDugum=(dugum*)malloc(sizeof(dugum));
    printf("Ogrenci no: ");
    scanf("%d",&yeniDugum->no);
    printf("Ogrenci adi: ");
    scanf("%s",yeniDugum->adi);
    printf("Ogrenci vize: ");
    scanf("%d",&yeniDugum->vize);
    printf("Ogrenci final: ");
    scanf("%d",&yeniDugum->final);
    printf("Hangi kayittan oncesine eklmek istiyorsunuz: ");
    printf("\nListe sonuna eklemek icin 0 gir.");
    scanf("%d",&kayitNo);
    p=head;
    if(p->no == kayitNo){  //basa ekle
        yeniDugum->sonraki=p;
        head=yeniDugum;
    }
    else{
        while(p->sonraki != NULL){
            q=p;
            p=p->sonraki;
            if(p->no == kayitNo)
                break;
            
        }
        if(p->no == kayitNo){  //araya ekleme
            q->sonraki = yeni;
            yeni->sonraki=p;
        }
        else if(p->sonraki == NULL){
            p->sonraki = yeni;
            yeni->sonraki=NULL;
        }
    }
}

void ogrenciSil(){
    int kayitNo;
    dugum *p,*q;
    printf("Silmek istediginiz ogrenci no: ");
    scanf("%d",&kayitNo);
    p=head;
    if(p->no == kayitNo){  //bastakini sil
        head=p->sonraki;
        free(p);
    }
    else{
        while(p->sonraki != NULL){
            if(p->no == kayitNo)
                break;
            else{
                q=p;
                p=p->sonraki;
            }
        }
        if(p->no == kayitNo){
            q->sonraki = p->sonraki;
            free(p);
        }
        else if(p->sonraki == NULL){
            printf("Silinecek ogrenci no yok\n");
        }
    }
}

double basariNotuHesapla(int vize,int final){
    return (0.4*vize)+(0.6*final);
}
void enBasariliOgrenci(){
    double basariNotu=0;
    dugum *p;
    p=head;
    enbasarili=head;
    while(p->sonraki != NULL){
        p=p->sonraki;
        if(basariNotuHesapla(p->vize,p->final)>basariNotuHesapla(enBasarili->vize,enBasarili->final));
            enBasarili=p;
    }
    printf("En basarili ogrenci:\n");
    printf("No:%d -Ad: %s Basari Notu:%.2f\n",enBasarili->no,enBasarili->adi,basariNotuHesapla(enBasarili->vize,enBasarili->final));
}

void sinifBasariOrtalanasi(){
    double basariNotuOrtalamasi=0;
    double toplam=0;
    int sayac=0;
    dugum *p;
    p=head;
    if(p==NULL)
        printf("Listede kayit yok!");
    else{
        do{
            toplam+=basariNotuHesapla(p->vize,p->final);
            p=p->sonraki;
            sayac++;
        }
        while(p!=NULL);
        basariNotuOrtalamasi=toplam/sayac;
        printf("Basari notu ortalamasi: %.2f \n",basariNotuOrtalamasi);
    }
}
int main(int argc, char *argv[]) {                
    int secim=0;
    printf("1-Liste olusturma \n 2-Yeni kayit ekle \n 3-Kayit sil \n 4-En yuksek basari notu \n 5-Sinif ortalamasi\n");
    while(1){
        printf("Secim yap[1-5]?");
        scanf("%d",&secim);
        switch(secim){
            case 1:
                ogrenciListeOlustur();
                ogrenciListele();
                break;
            case 2:
                ogrenciEkle();
                ogrenciListele();
                break;
            case 3:
                ogrenciSil();
                ogrenciListele();
                break;
            case 4:
                enBasariliOgrenci();
                break;
            case 5:
                sinifBasariOrtalamasi();
                break;
        }
    }
	return 0;
}
