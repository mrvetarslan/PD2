#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int i;
    struct student{
        int number;
        char name[40];
        char surname[40];
        float midtermGrade;
    };
    struct student person[10];
    
    for(i=0;i<3;i++){
        printf("%d. ogrencinin okul numarasini girin: ",i+1);
        scanf("%d",&person[i].number);
        printf("%d. ogrencinin ismini girin: ",i+1);
        scanf("%s",&person[i].name);
        printf("%d. ogrencinin soyismini girin: ",i+1);
        scanf("%s",&person[i].surname);
        printf("%d. ogrencinin sinav notunu girin: ",i+1);
        scanf("%f",&person[i].midtermGrade);
    }
    printf("\n\nBilgileri girilen ogrenciler\n\n");
    for(i=0;i<3;i++){
        printf("\n%d. ogrenci:\n",i+1);
        printf("Ogrencinin okul numarasi: %d\n",person[i].number);
        printf("Ogrencinin adi: %s\n",person[i].name);
        printf("Ogrencinin soyismi: %s\n",person[i].surname);
        printf("Ogrencinin sinav notu: %2.f\n",person[i].midtermGrade);
        printf("\n");
    }
    
    
    
    
    
	return 0;
}
