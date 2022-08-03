#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fonk(int *x,int size){
    if(size==0){
        if(x[size]%2==1){
            return 1;
        }
        else{
            return;
        }
    }
    else{
        if(x[size]%2==1){
            return 1+fonk(x,size-1);
        }
        else{
            return fonk(x,size-1);
        }
    }
}
int main(int argc, char *argv[]) {
    int sayilar[6]={8,1,11,5,16,4};
    int *p;
    p=&sayilar[0];
    printf("Tek sayi adedi: %d",fonk(p,6));
	return 0;
}
