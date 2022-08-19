#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int elemanSayisi,*dizi,i,yeniElemanSayisi;
    printf("Ilk eleman sayisi: ");
    scanf("%d",&elemanSayisi);
    dizi=(int*)malloc(elemanSayisi*sizeof(int));
    for(i=0;i<elemanSayisi;i++){
        scanf("%d",dizi+i);
    }
    printf("Bellegi genisletmek istediginiz miktari girin: ");
    scanf("%d",&yeniElemanSayisi);
    dizi=(int*)realloc(dizi,(elemanSayisi+yeniElemanSayisi)*sizeof(int));
    printf("Dizi genisletildi.Yeni elemanlari girin:\n");
    for(i=elemanSayisi;i<elemanSayisi+yeniElemanSayisi;i++){
        scanf("%d",dizi+i);
    }
    printf("\nOlusan dizinin elemanlari: ");
    for(i=0;i<elemanSayisi+yeniElemanSayisi;i++){
        printf("%d ",dizi[i]);
    }
    
	return 0;
}
