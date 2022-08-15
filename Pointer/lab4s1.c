#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main()
{
    int elemanSayisi,i,*dizi;
    printf("Eleman sayisini girin: ");
    scanf("%d", &elemanSayisi);
    dizi = (int*)calloc(elemanSayisi,sizeof(int));
    if(dizi == NULL)
        printf("Hafizada yer yok.");
    else{
        printf("Elemanlari girin\n ");
        for(i=0;i<elemanSayisi;i++)
            scanf("%d",dizi+i);
        for(i=0;i<elemanSayisi;i++){
            if(*dizi<*(dizi+i))
                *dizi=*(dizi+i);  
        }
    }
    printf("En buyuk eleman: %d",*dizi);

    


    return 0;
}

