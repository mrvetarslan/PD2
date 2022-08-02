#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int usAlma(int x,int y){
    if(x==0 || x==1)
        return x;
    if(y==0)
        return 1;
    else
        return usAlma(x,(y-1))*x; 
}

int main(int argc, char *argv[]){
    int sayi,us;
    printf("Bir sayi girin: ");
    scanf("%d",&sayi);
    printf("Ussu girin: ");
    scanf("%d",&us);
    usAlma(sayi,us);
    printf("Bu sayinin ussu: %d",usAlma(sayi,us));
    return 0;
}
