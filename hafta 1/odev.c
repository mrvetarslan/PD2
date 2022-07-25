 #include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    srand(time(NULL));
    int zar1, zar2,i,toplam,puan=0,yenitoplam;
    for(i = 0; i < 1; i++){
        zar1 = 1+(rand()%6);
        zar2 = 1+(rand()%6);
        printf("Zar1 : %d ve Zar2 : %d \n",zar1,zar2);
    }
    toplam=zar1+zar2;
    if(toplam==7 || toplam==11){
        printf("Tebrikler oyunu kazandiniz.");
    }
    if(toplam==2 || toplam==3 || toplam==12){
        printf("Kaybettiniz.");
    }
    if(toplam==4 || toplam==5 || toplam==6 || toplam==8 || toplam==9 || toplam==10){
        puan+=toplam;
        printf("\nSuanda puanin: %d\n",puan);
        while(toplam != 7){
            zar1 = 1+(rand()%6);
            zar2 = 1+(rand()%6);
            yenitoplam = zar1+zar2;
            printf("\nZar1 : %d ve Zar2 : %d\n",zar1,zar2); 
            printf("\nToplam: %d",yenitoplam);
            if(yenitoplam==puan){
                printf("\nKazandiniz.");
                break;
            } 
            else if(yenitoplam == 7){
                printf("\nKaybettiniz.");
                break;
            }  
        }
    }
        
        
    
       
                
        
    
    
    
    
    
    
	return 0;
}
